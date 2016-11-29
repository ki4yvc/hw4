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
fuelLevel(10.0), transmissionType(6)
{ }

// Validation is required  in the contructor
Vehicle::Vehicle(const int doors, const int cylinders, string color,
           const double tank, double initialfuel,
           const int transmission):
numDoors(doors), numCylinders(cylinders), tankSize(tank),
transmissionType(transmission)
{
	this->color = color;
	fuelLevel = initialfuel;
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
	this->fuelLevel = amount;
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
