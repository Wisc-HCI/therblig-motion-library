## About this Project

This is a GUI for an MIT/Wisconsin NSF/NRI project. It allows a user to enter in a series of tasks with various parameters, order them, and then send the tasks to a robot.

## Getting Started

This is built with Node.js, Mongodb, Express.js, Mongoose, Mongolab, and Bootstrap. A version is hosted on Heroku.  

Once all dependencies are installed (listed in package.json, installed by running "npm install"), run the app by running 'npm start' in the nsf-nri directory. This will run the GUI on localhost. It is currently hosted on heroku at nsf-nri.herokuapp.com. 

## Navigating the file system
**public/**: stylesheets, common javascript, and currently the json for storing task parameters and details; very little 

**routes/**: backend processing for each web page

**static/**: front-end javascript written exclusively for this app 

**views/**: the HTML (technically ejs) files for each web page

**app.js**: configuration for serving the app

**db.js**: database configuration and connection

**package.json**: dependencies/requirements for this app; running "npm install" installs all of these


## Changing Task/Parameter Options

This web app has been built to have great flexibility when it comes to adding, changing, or removing task and parameter options. To do so, follow these instructions.

**task**: If there are no new parameters, simply add the task to message_lookup.json with its message code and parameters. Note that the integer after each parameter is the number of bytes the robot reciever expects for that parameter, and that it's important to list the parameters in the order that the robot reciever expects to recieve them. If there are new parameters, you will need to add each one of those in the following way.

**parameters**: First, on `index.ejs`, add the parameter to the edit, display, and input sections. Those three sections are the majority of the code on the page and should be easy to identify. You can follow the pattern of the other parameters for guidance. Second, add the parameter to the form verification on `index_fe.js` by adding a new case to the `checkIfValid()` function. Third, add the parameter to the two lists in `db.js`. Finally, add them to `router.create`, `router.update`, and `router.import` in `index.js`. All done! 

## Misc.
message_lookup.json: It is imperative that the order of the parameters for each task be the same order as the server is expecting, ie match the structs file. 

## Copyright and License
Based on [Bare](http://startbootstrap.com/template-overviews/bare/)
Copyright 2013-2015 Iron Summit Media Strategies, LLC. Code released under the [Apache 2.0](https://github.com/IronSummitMedia/startbootstrap-bare/blob/gh-pages/LICENSE) license.
