// mongoose setup
require( './db' );

var express = require('express');
var path = require('path');
var favicon = require('serve-favicon');
var logger = require('morgan');
var cookieParser = require('cookie-parser');
var bodyParser = require('body-parser');

var routes = require('./routes/index');
var users = require('./routes/users');

// DB stuff
// var mongo = require('mongodb');

var mongoose = require( 'mongoose' );
var mongodbUri = 'mongodb://what:what@ds047345.mongolab.com:47345/heroku_fh1tlrkf';

var db = mongoose.connection;

var app = express();

// view engine setup
app.set('views', path.join(__dirname, 'views'));
app.set('view engine', 'ejs');

// uncomment after placing your favicon in /public
//app.use(favicon(path.join(__dirname, 'public', 'favicon.ico')));
app.use(logger('dev'));
app.use(bodyParser.json());
app.use(bodyParser.urlencoded({ extended: true }));
app.use(cookieParser());
app.use(express.static(path.join(__dirname, 'public')));
app.use(express.static(path.join(__dirname, 'static')));

// Make our db accessible to our router
app.use(function(req,res,next){
    req.db = db;
    next();
});

//routes

app.use('/users', users);
app.get( '/destroy/:id', routes.destroy );
app.post( '/update', routes.update );

app.post( '/create', routes.create );
app.get( '/exports', routes.exports );
app.get( '/imports', routes.imports );
app.post( '/sendtasks', routes.sendtasks );
app.post( '/saveworkspace', routes.saveworkspace );
app.use('/', routes);
// app.use( '/', routes.index );


// catch 404 and forward to error handler
app.use(function(req, res, next) {
  var err = new Error('Not Found');
  err.status = 404;
  next(err);
});

// error handlers

// development error handler
// will print stacktrace
if (app.get('env') === 'development') {
  app.use(function(err, req, res, next) {
    res.status(err.status || 500);
    res.render('error', {
      message: err.message,
      error: err
    });
  });
}

// production error handler
// no stacktraces leaked to user
app.use(function(err, req, res, next) {
  res.status(err.status || 500);
  res.render('error', {
    message: err.message,
    error: {}
  });
});


module.exports = app;
