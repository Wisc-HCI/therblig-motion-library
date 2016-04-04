#ifndef DATASUBSCRIBER_H_
#define DATASUBSCRIBER_H_



/*
This is a class that allows querying of various robot states at arbitrary time.
It creates a new thread that spins on given topics, and stores these to shared memory
that can be accessed by other threads
*/
class data_subscriber{
public:
	/*
	Constructor for data subscriber
	@param argc: passed to rosnode init
	@param argv: passed to rosnode init
	*/
	data_subscriber(int argc, char ** argv);
	~data_subscriber();

	/*
	@return current simulation time
	*/
	double getSimTime();
private:
};

#include "datasubscriber.cpp"
#endif