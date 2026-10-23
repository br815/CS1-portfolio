/*	Author:					Bushra Rahman
	Course:					CS 1337 (Fall 2019)
	Date:					11/14/2019
	AbstractLogger.h:		This header file contains the definition of the AbstractLogger class.
							This class is the abstract base class from which the FileLogger and ScreenLogger classes are derived. */

// header for #include guard (preprocessor directives)
#ifndef ABSTRACTLOGGER_H_	// if ABSTRACTLOGGER_H_ is not defined, define it (start of header guard)
#define ABSTRACTLOGGER_H_	// define ABSTRACTLOGGER_H_ once to prevent multiple inclusions
#include <iostream>
using namespace std;



// enumeration of the two derived classes --> allows for a factory method design pattern
// any new derived classes can be added into this enumeration
enum LoggerType
{
	// LT stands for LoggerType
    LT_FileLogger,    LT_ScreenLogger
};



class AbstractLogger
{
private:
	// flag to enable or disable logging
	bool loggingEnabled;

public:
	// constructor
	AbstractLogger();
	// destructor
	virtual ~AbstractLogger();

	// inline getter for loggingEnabled
	bool getLoggingEnabled() const
	{
		return loggingEnabled;
	}

	// inline setter for loggingEnabled
	void setLoggingEnabled(bool isEnabled)
	{
		loggingEnabled = isEnabled;
	}

	// pure virtual function that is overridden and defined in each subclass
	virtual void displayMessage(const char*) = 0;

	// virtual function that is overridden in each subclass
	virtual void logMessage(const char*);

	// static Create function --> allows for a factory method design pattern
	static AbstractLogger* Create(LoggerType loggerType);
};

#endif						// end of "if not defined" ifndef block