/*	Author:					Bushra Rahman
	Course:					CS 1337 (Fall 2019)
	Date:					10/31/2019
	AcrobatAircraft.cpp:	This source file contains the definitions for the 8 member functions defined in the AcrobatAircraft subclass of Aircraft. */

#include "AcrobatAircraft.h"	// header file for the subclass AcrobatAircraft
#include <string>
#include <iostream>
#include <cstdlib>
using namespace std;



/*	Function 1:		Constructor.
	Descr:			This function initializes the string fields in the AcrobatAircraft object.
	Param:    		string strManufacturer, string strPerformanceCapability, int seatCapacity, int numberOfEngines
					These fields are unique to the AcrobatAircraft subclass.
					Additionally, Aircraft (seatCapacity, 2, numberOfEngines) is a member initializer list 
					that initializes those fields using the base class constructor:
					Aircraft(int seatCapacityR, int aircraftTypeR which is 2, int numberOfEnginesR).
	Return:			None, initializes an AcrobatAircraft object. */
AcrobatAircraft::AcrobatAircraft(string strManufacturer, string strPerformanceCapability, int seatCapacity, int numberOfEngines) 
								: Aircraft(seatCapacity, 2, numberOfEngines)
{
	// use the "this" pointer to the object to initialize the object's string fields
	this->strManufacturer = strManufacturer;
	this->strPerformanceCapability = strPerformanceCapability;
}



/*	Function 2:		Destructor.
	Descr:			This function de-allocates the memory used to create the string fields in the AcrobatAircraft object.
	Param:    		None.
	Return:			None. */
AcrobatAircraft::~AcrobatAircraft()
{
	delete &strManufacturer;
	delete &strPerformanceCapability;
}



/*	Function 3:		printCharacteristics()
	Descr:			This is an overriden base class function. It prints this class's fields.
					This function treats the object as a const to ensure it won't be modified.
	Param:    		None.
	Return:			None. */
void AcrobatAircraft::printCharacteristics() const
{
	// first call the base class printCharacteristics() function
	Aircraft::printCharacteristics();
	cout << endl << "    Manufacturer: " << strManufacturer << endl << "    Performance Capability: " << strPerformanceCapability;
}



/*	Function 4:		doAcrobaticManeuver()
	Descr:			This is a function unique to this class.
	Param:    		None.
	Return:			None. */
void AcrobatAircraft::doAcrobaticManeuver()
{
	cout << endl << "Acrobat Aircraft " << getAircraftID() << ": acrobatic maneuver performed";
}



/*	Function 5:		getStrManufacturer()
	Descr:			This is the getter for strManufacturer.
					This function treats the object as a const to ensure it won't be modified.
	Param:    		None.
	Return:			string str
					The retrieved string strManufacturer. */
string AcrobatAircraft::getStrManufacturer() const
{
	string str = this->strManufacturer;
	return str;
}



/*	Function 6:		setStrManufacturer()
	Descr:			This is the setter for strManufacturer.
	Param:    		string strManufacturer
					The inputted string to be set as strManufacturer.
	Return:			None. */
void AcrobatAircraft::setStrManufacturer(string strManufacturer)
{
	this->strManufacturer = strManufacturer;
}



/*	Function 7:		getStrPerformanceCapability()
	Descr:			This is the getter for strPerformanceCapability.
					This function treats the object as a const to ensure it won't be modified.
	Param:    		None.
	Return:			string str
					The retrieved string strPerformanceCapability. */
string AcrobatAircraft::getStrPerformanceCapability() const
{
	string str = strPerformanceCapability;
	return str;
}



/*	Function 8:		setStrPerformanceCapability()
	Descr:			This is the setter for strPerformanceCapability.
	Param:    		string strPerformanceCapability
					The inputted string to be set as strPerformanceCapability.
	Return:			None. */
void AcrobatAircraft::setStrPerformanceCapability(string strPerformanceCapability)
{
	this->strPerformanceCapability = strPerformanceCapability;
}
