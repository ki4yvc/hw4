/* Name: Dylan Wilcox (dawilco sec 1), Nicholas Gustafson (ngustaf sec 2)
 * Course: CPSC1070
 * Assignment: HW #4
 * Due: November 29th, 2016
 *
 * Description: Controller class for abstract vehicle.
 */

#include "vehicle.h"
#include "truck.h"
#include "taxi.h"

/* Defualt constructor
	sets the nessesary variables for vehicle
	to static values.

	input:
		none

	creates the object
*/
Vehicle::Vehicle():
numDoors(4), numCylinders(8), color("Blue"), tankSize(10),
fuelLevel(10.0), transmissionType(6) { }

/*input file constructor
	takes the input of a file and reads one
	line for the type then fuel and then the color

	input:
		ifstream& of a file with the
		type, fuel and color

	creates the object
*/
Vehicle::Vehicle(ifstream &infile):
numDoors(4), numCylinders(8), tankSize(10),
transmissionType(6) {
	double fuel = -1.0;
	if(!infile.eof()) {
		infile >> type >> fuel >> color;
		if(type == "taxi") {
			new Taxi(fuel, color);
			Taxi::incCount();
		} else if(type == "truck") {
			new Truck(fuel, color);
			Truck::incCount();
    		}
	}

}

/*regular constructor
	takes in values and makes them into the right variables
	to create the vehicle

	input:
		doors - int for the number of doors
		cylinders - int for the number of cylinders
		color - string for the color
		tank - double for the gas tank size
		initialfuel - double for the amount of fuel
		transmission - int for the transmission type

	creates the vehicle
*/
Vehicle::Vehicle(const int doors, const int cylinders, string color,
           const double tank, double initialfuel,
           const int transmission):
numDoors(doors), numCylinders(cylinders), tankSize(tank),
transmissionType(transmission)
{
	this->color = color;
	setFuelLevel(initialfuel);
}

//Does nothing
Vehicle::~Vehicle() {}

/*Sets the type of the vehicle
	changes the type to the input

	input:
		type - string for the type
			expected: "taxi", or "truck"

	no output
*/
void Vehicle::setType(string type)
{
	this->type = type;
}

/*Sets the color of the vehicle
	changes the color to the input

	input:
		color - string for the color of the vehicle

	no output
*/
void Vehicle::setColor(string color)
{
	this->color = color;
}

/*Sets the fuel level of the vehicle
	changes the fuel level to the input
	also tests if the input is greater than the max
	fuel load, if so then the fuel level is set at 5.0

	input:
		amount - double for the fuel
			level of the vehicle

	no output
*/
void Vehicle::setFuelLevel(double amount)
{
	if(amount <= 0 || amount >tankSize)
		fuelLevel = 5.0;
	else
		fuelLevel = amount;
}

/*returns the type of the vehicle

	input:
		none

	output:
		type - string for the type of the
			vehicle
*/
const string Vehicle::getType() const
{
	return type;
}

/*returns the number of doors that the vehicle has

	input:
		none

	output:
		numDoors - int for the number of doors
			that the vehicle has
*/
const int Vehicle::getDoors() const
{
	return numDoors;
}

/*returns the number of cylinders the vehicle has

	input:
		none

	output:
		numCylinders - int for the number of
			cylinders the vehicle has
*/
const int Vehicle::getCylinders() const
{
	return numCylinders;
}

/*returns the color of the vehicle

	input:
		none

	output:
		color - string for the color of the
			vehicle
*/
const string Vehicle::getColor() const
{
	return color;
}

/*returns the tank size of the vehicle

	input:
		none

	output:
		tankSize - double for the tank size of
			the vehicle
*/
const double Vehicle::getTankSize() const
{
	return tankSize;
}

/*returns the fuel level of the vehicle

	input:
		none

	output:
		fuelLevel - double for the fuel level of
			the vehicle
*/
const double Vehicle::getFuelLevel() const
{
	return fuelLevel;
}

/*returns the Transmission type of the vehicle

	input:
		none

	output:
		transmissionType - int for the transmission
			type of the vehicle
*/
const int Vehicle::getTransmissionType() const
{
	return transmissionType;
}

/*returns -1 becuase there should not be just a vehicle
	it needs to have a sub class

	input:
		none

	output:
		-1 because there should never be
		just a vehicle
*/
int Vehicle::getCount() {
	return -1;
}

/*prints out the right text for the right type

	input:
		none

	output:
		prints out either "beep beep"
		or "honk honk" for taxi or truck type
		respectivly
*/
void Vehicle::horn() const{
	if(type == "taxi")
		cout << "beep beep" << endl;
	else if(type == "truck")
		cout << "honk honk" << endl;
}

/*prints out variables for the description of the vehicle

	input:
		none

	output:
		prints the number of doors, number of cylinders,
		color, tank size, fuel level and the transmission
		type in that order
*/
void Vehicle::printInfo() const{
	cout << "Number of doors: " << numDoors << endl;
        cout << "Number of Cylinders: " << numCylinders << endl;
        cout << "Color: " << color << endl;
        cout << "Tank Size: " << tankSize << endl;
        cout << "Fuel Level: " << fuelLevel << endl;
        cout << "Transmission type: " << transmissionType << endl;
}
