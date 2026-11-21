/*	Author:					Bushra Rahman
	Course:					CS 1337 (Fall 2019)
	Date:					11/14/2019
	FileLogger.cpp:			This source file contains the definitions for the 4 member functions defined in the FileLogger subclass of AbstractLogger. */

// include the header files for this subclass and its superclass
#include "AbstractLogger.h"
#include "FileLogger.h"
#include <iostream>
#include <fstream>
using namespace std;



/*	Function 1:		Constructor.
	Descr:			This constructor opens the output file.
	Param:    		None.
	Return:			None, initializes a FileLogger object. */
FileLogger::FileLogger() : AbstractLogger()
{
	fout.open(FILENAME);
	if(!fout)
    {
        cerr << "ERROR: Could not open file: " << FILENAME << endl;
    }
}



/*	Function 2:		Destructor.
	Descr:			This destructor closes the output file.
	Param:    		None.
	Return:			None. */
FileLogger::~FileLogger()
{
	fout.close();
}



/*	Function 3:		displayMessage()
	Descr:			This function is overridden from the base class's pure virtual function.
					This function displays the message given as an argument in the output file.
	Param:    		const char* message
					Pointer to a string in memory.
	Return:			None. */
void FileLogger::displayMessage(const char* message)
{
	fout << message << endl;
}



/*	Function 4:		logMessage()
	Descr:			This function only allows displayMessage() to be called if logging is enabled.
	Param:    		const char* message
					Pointer to a string in memory.
	Return:			None. */
void FileLogger::logMessage(const char* message)
{
	if(getLoggingEnabled() == true)
	{
		displayMessage(message);
	}
}
