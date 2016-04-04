var mongoose = require( 'mongoose' );
var Schema   = mongoose.Schema;
var mongooseToCsv = require( 'mongoose-to-csv');
var fs = require("fs");
var shortid = require('shortid');

mongoose.set('debug', true);

// var MArray = mongoose.Schema.Types.Array;

// var Todo = new Schema({
//     user_id    : String,
//     content    : String,
//     updated_at : Date
// });

// mongoose.model( 'Todo', Todo );
// mongoose.connect( 'mongodb://localhost/todo' ); //express-todo

// var mongoose = require('mongoose');    

// mongoose.connect('mongodb://localhost/test');

var mongodbUri = 'mongodb://what:what@ds047345.mongolab.com:47345/heroku_fh1tlrkf';

mongoose.connect(process.env.MONGOLAB_URI || "mongodb://localhost/test",
    function(err) {
      console.log("CONNECTION MADE");
        if (err) {
        console.log("ERROR: There is an error connecting to the db.");
        console.log(err);
         throw err; }
    }
  );

console.log(process.env.MONGOLAB_URI);

var db = mongoose.connection;



var Task = new Schema({
    // agent      : String, // Should be either 'robot' or 'human'; this will need a binary selector
    descript    : String, // Task name; 'grip', 'ungrip', etc.; this will need to have a list of options
    duration    : String, // some time; autopopulate for robot?
    skills      : Array,
    tools       : Array,
    parents     : Array,
    updated_at  : Date,
    arm         : String,
    grasp_effort: String,
    object      : String,
    orientation : String,
    angle       : String,
    location    : String,
    size        : String,
    relativeX   : String,
    relativeY   : String,
    relativeZ   : String,
    order_number: String,
    max_joint_vel: String,
    is_supertask: String,
    short_id    : {
      type: String,
      unique: true,
      'default': shortid.generate
    }
});

var TaskModel = mongoose.model( 'Task', Task );


Task.plugin(mongooseToCsv, {
  headers: 'ID Descript Duration Skills Skill2 Tools Tool2 Updated_At Parents Arm Grasp_Effort Object Orientation Angle Location Size RelativeX RelativeY RelativeZ OrderNumber ShortID MaxJointVel IsSupertask',
  constraints: {
    'ID': '_id',
    // 'Agent': 'agent',
    'Descript': 'descript',
    'Duration': 'duration',
    'Skills': 'skills',
    'Tools': 'tools',
    'Parents': 'parents',
    'Updated_At': 'updated_at',
    'Arm': 'arm',
    'Grasp_Effort': 'grasp_effort',
    'Object': 'object',
    'Orientation': 'orientation',
    'Angle': 'angle',
    'Location': 'location',
    'Size': 'size',
    'RelativeX': 'relativeX',
    'RelativeY': 'relativeY',
    'RelativeZ': 'relativeZ',
    'OrderNumber': 'order_number',
    'ShortID': 'short_id',
    'MaxJointVel': 'max_joint_vel',
    'IsSupertask': 'is_supertask'
  }
  // virtuals: {
  //   'Skills': function(doc) {
  //       return implode(', ',docs.skills)
  //     //   var skills_list = '';
  //     //   for skill in doc.skills:
  //     //       skills_list = skills_list + skill + " ";
  //     // return skills_list;
  //   }
  //}
});

// var TaskS = mongoose.model('TaskS', TaskSchema);



// mongoose.connect( 'mongodb://heroku_fh1tlrkf:mip0sa3evrmaf7rflh5klu0eoi@ds047345.mongolab.com:47345/heroku_fh1tlrkf');

// });
