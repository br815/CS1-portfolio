/*	Author:		    	Bushra Rahman
	Course:		    	CS 1337 (Fall 2019)
	Date:				9/24/2019
	processArray.h:		This header file contains the 6 function prototypes for this project. */

// header for #include guard (preprocessor directives)
#ifndef PROCESSARRAY_H_		// if PROCESSARRAY_H_ is not defined, define it (start of header guard)
#define PROCESSARRAY_H_		// define PROCESSARRAY_H_ once to prevent multiple inclusions
#include <fstream>
#include <string>
using namespace std;

void runSort(int sortingChoice, int numItems, string lastNameArray[], string firstNameArray[], string birthdateArray[]);
void runSearch(string searchingFor, int numItems, string lastNameArray[], string firstNameArray[], string birthdateArray[]);
void printArrays(string title, int numItems, string lastNameArray[], string firstNameArray[], string birthdateArray[]);
int getSortingChoice();
string searchString();
int getPrompt();

#endif						// end of "if not defined" ifndef block
