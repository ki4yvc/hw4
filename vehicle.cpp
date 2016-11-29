/* Name: Dylan Wilcox (dawilco sec 1), Nicholas Gustafson (ngustaf sec 2)
 * Course: CPSC1070
 * Assignment: HW #4
 * Due: November 29th, 2016
 *
 * Description: Controller class for abstract vehicle.
 */

#include "vehicle.h"

Vehicle::Vehicle():
numDoors(4), numCylinders(8), color("Blue"), tankSize(10),
fuelLevel(10.0), transmissionType(6) { }

Vehicle::Vehicle(ifstream &infile) {
	string result;
	getline(infile, result);





}

// Validation is required  in the contructor
Vehicle::Vehicle(const int doors, const int cylinders, string color,
           const double tank, double initialfuel,
           const int transmission):
numDoors(doors), numCylinders(cylinders), tankSize(tank),
transmissionType(transmission)
{
	this->color = color;
	setFuelLevel(initialfuel);
}

Vehicle::~Vehicle()
{

}

void Vehicle::setType(string type)
{
	this->type = type;
}

void Vehicle::setColor(string color)
{
	this->color = color;
}

void Vehicle::setFuelLevel(double amount)
{
	if(amount <= 0 || amount >tankSize)
		fuelLevel = 5.0;
	else
		fuelLevel = amount;
}

const string Vehicle::getType() const
{
	return type;
}

const int Vehicle::getDoors() const
{
	return numDoors;
}

const int Vehicle::getCylinders() const
{
	return numCylinders;
}

const string Vehicle::getColor() const
{
	return color;
}

const double Vehicle::getTankSize() const
{
	return tankSize;
}

const double Vehicle::getFuelLevel() const
{
	return fuelLevel;
}

const int Vehicle::getTransmissionType() const
{
	return transmissionType;
}

int Vehicle::getCount() {
	return -1;
}

void Vehicle::horn() const{
	if(type == "taxi")
		cout << "beep beep" << endl;
	else if(type == "truck")
		cout << "honk honk" << endl;
}

void Vehicle::print() const{
	cout << "Type: " << type << endl;
	cout << "Number of doors: " << getDoors() << endl;
        cout << "Number of Cylinders: " << getCylinders() << endl;
        cout << "Color: " << getColor() << endl;
        cout << "Tank Size: " << getTankSize() << endl;
        cout << "Fuel Level: " << getFuelLevel() << endl;
        cout << "TransmissionType(): " << getTransmissionType() << endl;
}
