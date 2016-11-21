#include "vehicle.h"

Vehicle::Vehicle()
{

}

Vehicle::Vehicle(const int doors, const int cylinders, string color,
           const double tank, double initialfuel,
           const int transmission);
{
	numDoors = doors;
	numCylinders = cylinders;
	this->color = color;
	tankSize = tank;
	initialfuel = fuelLevel;
	transmissionType = transmission;
}

static int Vehicle::getCount();
{


}

virtual Vehicle::~Vehicle();
{

} 

void Vehicle::setType(string type);
{
	this->type = type;
}

void Vehicle::setColor(string color);
{
	this->color = color;
}

void Vehicle::setFuelLevel(double amount);
{
	this->fuelLevel = amount;
}

const string Vehicle::getType() const;
{
	return type;
}

const int Vehicle::getDoors() const;
{
	return numDoors;
}

const int Vehicle::getCylinders() const;
{
	return numCylinders;
}

const string Vehicle::getColor() const;
{
	return color;
}

const double Vehicle::getTankSize() const;
{
	return tankSize;
}

const double Vehicle::getFuelLevel() const;
{
	return fuelLevel;
}

const int Vehicle::getTransmissionType() const;
{
	return transmissionType;
}
