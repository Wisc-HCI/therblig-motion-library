///// Functions for the front-end side of the site /////

///// VARIABLES /////
var json_data;

///// ON START FUNCTIONS /////
updateParamsOnDropdown(); // To make sure the default selected task has shown parameters
$("#task-choice").change(updateParamsOnDropdown ); // Change the shown params when dropdown task changes
$(function() {
    $(".sortable").sortable();
});
$.getJSON("json_data/message_lookup.json", function(data) { 
    json_data = data;
});

$( "#sendTasks_form" ).submit(function( event ) {
    event.preventDefault();
    saveAndSendTasks();

  // callSendTasks();
});

function callSendTasks() {
      $.post("/sendtasks", {ip_destination:$("#ip_destination_input").val()}, function(data, status){
        // console.log(data);
        console.log("Send tasks status: " + status);
  });
}

// $( ".draggabletask" ).draggable({ containment: ".containment-wrapper", scroll: false });
    // function getip(json){
    //   console.log(json.ip); // alerts the ip address
    // }

$(function() {
    $( ".therblig-template" ).draggable({
      appendTo: "body",
      helper: "clone"
    });
    $( ".connectedSortable" ).droppable({
      // activeClass: "ui-state-default",
      // hoverClass: "ui-state-hover",
      accept: ":not(.ui-sortable-helper)",
      // over: function( event, ui ) { 
      //   console.log("what");
      //   console.log(event);
      //   console.log(ui);
      //   event.preventDefault(); 
      // },
      drop: function( event, ui ) {
        console.log($(this).attr('id'));
        ui.draggable.clone().addClass("therblig")
            .appendTo($(this))
            // .append('<a href="/destroy/555" title="Delete"><image src="images/delete.png" height="20px"></a>'
            //     +' <a onclick="editTask(this, tasks2)" title="Edit" id="555"><image src="images/edit.png" height="20px"></a>');
        createNewFromDefault(ui.draggable.find("p").html(), $(this).attr('id'));
        console.log($(this).attr('id'));
      }
  });
    // }).sortable({
    //   items: "li:not(.placeholder)",
    //   sort: function() {
    //     // gets added unintentionally by droppable interacting with sortable
    //     // using connectWithSortable fixes this, but doesn't allow you to customize active/hoverClass options
    //     $( this ).removeClass( "ui-state-default" );
    //   }
    // });

    $( ".connectedSortable" ).sortable({
      connectWith: ".connectedSortable",

      //   start: function( event, ui ) { 
      //   $(".connectedSortable").css({
      //       'overflow-y': 'visible'
      //   });
      // },
      //         stop: function( event, ui ) { 
      //   $(".connectedSortable").css({
      //       'overflow-y': 'scroll'
      //   });
      // },
    }).disableSelection();


});


function createNewFromDefault(therbligType, parentId) {
    // therbligType = therbligType.replace(/\s+/g, '');
    dataDict = {
        descript    : therbligType, 
        duration    : "0", 
        skills      : [], 
        tools       : [],
        parents     : [parentId.toString()], //TODO
        arm         : "left",
        grasp_effort: "100",
        object      : "0",
        orientation : "0",
        angle       : "0",
        location    : "0",
        size        : "0",
        relativeX   : "0",
        relativeY   : "0",
        relativeZ   : "0",
        max_joint_vel: "100",
        is_supertask: "false",
    }
    $.post("/create", dataDict, function(){ //data, status){
        location.reload();
    });
}

function createSupertask() {
    supertaskName = $('#supertask_name_input').val();
    console.log(supertaskName);
    // therbligType = therbligType.replace(/\s+/g, '');
    dataDict = {
        descript    : supertaskName, 
        duration    : "0", 
        skills      : [], 
        tools       : [],
        parents     : [],
        arm         : "left",
        grasp_effort: "100",
        object      : "0",
        orientation : "0",
        angle       : "0",
        location    : "0",
        size        : "0",
        relativeX   : "0",
        relativeY   : "0",
        relativeZ   : "0",
        max_joint_vel: "100",
        is_supertask: "true",
    }
    console.log("I made the dict");
    $.post("/create", dataDict, function(){ //data, status){
        window.location.reload();
    });
}

// Edit Tasks: toggle out the sidebar, fill in the blanks, and show the relevant param spaces
function editTask(element, tasks2) {    //<!-- should  probably do this with database? just iterate over tasks? -->
    $(".editTask_robo_param").hide(); 
    // menu toggle with id
    $("#wrapper").addClass("toggled");
    $("#editTask_id").val(element.id);
    var thisTask; 
    tasks2.forEach( function( task ){
        if (task._id == element.id) {
            thisTask = task;
        }
    });
    $.getJSON("json_data/message_lookup.json", function(data) { 
        $("#editTask_form_descript").val(thisTask["descript"]);
        for (key in data[thisTask["descript"].replace(/\s+/g, '')]["parameters"]){
            $("#editTask_form_"+key).val(thisTask[key]);
            $("#editTask_"+key).show();
        }
    });
}

// Task Inventory: look at all the tasks, find their order, and display
function taskInventory() {    //<!-- should  probably do this with database? just iterate over tasks? -->
    var divs = document.getElementsByClassName("alltasks");
    // console.log(divs);
    // var bigdivs = document.getElementsByClassName("bigtask")
    // console.log(bigdivs);
    // divs = divs.concat(bigdivs);
    // console.log(divs);
    var div2 = document.getElementById("taskInventoryList");
    var divsList = []
    div2.innerHTML = "List starts here"
    for(var i = 0; i < divs.length; i++){
        divsList.push([divs[i].id, divs[i].getBoundingClientRect().left, divs[i].getBoundingClientRect().top]);
        // div2.innerHTML += "<br>" + divs[i].id + ", " + divs[i].getBoundingClientRect().left;
    }  
    divsList.sort(function(a,b) { 
        if (a[1] - b[1] != 0){
            return (a[1] - b[1]);
        } else {
            return (a[2] - b[2]);
        }
    });
    for(var i = 0; i < divsList.length; i++){
        div2.innerHTML += "<br>" +divsList[i];
    }
    return divsList;
}

// Called when page loaded or dropdown changed; 
function updateParamsOnDropdown() {
    var key = "";
    // if the dropdown hasn't been changed yet, show the params for transport_empty
    if ($(this).context == undefined) {
        var key = "transport_empty";
    }
    else {
        key = $(this).val();
    }
    $.getJSON("json_data/message_lookup.json", function(data) { 

        // var key = $dropdown.val();
        var vals = [];
        for (param in data[key]["parameters"]){
            vals.push(param);
        }
        $(".robo_param").hide();
        $.each(vals, function(index, value) {
            $("#"+value).show();
        });

    });
}

// Save Workspace: save and preserve the order of the tasks currenlty on the timeline
function saveWorkspace() {
    divslist = taskInventory();
    divsdict = {};
    parsdict = {};
    for (var i=0; i<divslist.length; i++) {
        divsdict[divslist[i][0]] = i;
        // console.log($("#"+divslist[i]).parent().attr("id"));
        parsdict[divslist[i][0]] = $("#"+divslist[i]).parent().attr("id");
    }
    $.post("/saveworkspace", {divsdict,parsdict}, function(){ //data, status){
    });
}

function saveAndSendTasks() {
    divslist = taskInventory();
    divsdict = {};
    parsdict = {};
    for (var i=0; i<divslist.length; i++) {
        divsdict[divslist[i][0]] = i;
        // console.log($("#"+divslist[i]).parent().attr("id"));
        parsdict[divslist[i][0]] = $("#"+divslist[i]).parent().attr("id");
    }
    $.post("/saveworkspace", {divsdict,parsdict}, function(){ //data, status){
        callSendTasks();
    });
}

///// FORM VERIFICATION /////

// When submitting new task form, first check if the values are valid;
// If it is valid, clear non-visible fields and then submit
$('#myBigForm').submit(function (evt) {
    if (validateMyForm() == false) {
        evt.preventDefault();
        alert("Please correct invalid form entries.");
    }
    else {
        $("#myBigForm input").each(function() {
            if($(this).is(':hidden')) {
                $(this).val("");
            }
            else {
            }
        });
    }
});

// Check if the form is valid. If it is, let it be submitted. If not, don't. 
function validateMyForm()
{
    var formValid = true;
    for (key in json_data[$("#task-choice").val()]["parameters"]){
        formValid = formValid && checkIfValid(key, $( "#"+key ).find('input').val());
    }
    return formValid;
}

// If the input is invalid, make the box turn red and say that the form isn't valid
// If the input is valid, undo anything from the updateInvalidInput functoin
function updateInputBox(element, valid){
    if (valid) {
        element.removeClass("has-error");
        element.removeClass("has-feedback");
        element.find('span').hide();
    } else {
        element.addClass("has-error");
        element.addClass("has-feedback");
        element.find('span').show();
    }
}

// Form validation for param grasp_effort
$( ".robo_param" ).focusout(function() {
    updateInputBox($(this),checkIfValid($(this).attr('id'), $(this).find('input').val()));
});

// Checks if a value of a parameter is valid (true) or invalid (false)
function checkIfValid(parameter_name, parameter_value) {
    // console.log("CHECKING IF " + parameter_name +" VALUE IS VALID: " + parameter_value);
    if (parameter_value == ""){ // Get rid of blank spaces (lookin' at you, tswift)
        return false;
    }
    switch(parameter_name) {
    case "grasp_effort": // Valid inputs are 0 to 100, inclusive
        if (parameter_value >= 0 && parameter_value <= 100) {
            return true;
        } else { return false; }
        break;
    case "object":
        if (true) {
            return true;
        } else { return false; }
        break;
    case "orientation":
        if (parameter_value==0 || parameter_value==1) {
            return true;
        } else { return false; }
        break;
    case "angle":
        if (parameter_value==0 || parameter_value==1 || parameter_value==2) {
            return true;
        } else { return false; }
        break;
    case "location":
        if (true) {
            return true;
        } else { return false; }
        break;
    case "size":
        if (true) {
            return true;
        } else { return false; }
        break;
    case "relativeX":
        if (true) {
            return true;
        } else { return false; }
        break;
    case "relativeY":
        if (true) {
            return true;
        } else { return false; }
        break;
    case "relativeZ":
        if (true) {
            return true;
        } else { return false; }
        break;
    case "max_joint_vel":
        if (true) {
            return true;
        } else { return false; }
        break;
    default:
        return true;
        console.log("Paramter not in Check If Valid function.");
    }
}



