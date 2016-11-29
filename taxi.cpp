/* Name: Dylan Wilcox (dawilco sec 1), Nicholas Gustafson (ngustaf sec 2)
 * Course: CPSC1070
 * Assignment: HW #4
 * Due: November 29th, 2016
 *
 * Description: Taxi class and methods.
 */

#include "taxi.h"
int Taxi::count = 0;
Taxi::Taxi():Vehicle()
{
	setType("taxi");
}

Taxi::Taxi(ifstream &infile):Vehicle(infile) {
	setType("taxi");
}

Taxi::Taxi(double fuel, string color) : Vehicle(4, 6, color, 10.0, fuel, 5)
{
	setType("taxi");
}

Taxi::Taxi(double fuel):Vehicle(4,6,"Yellow",10.0, fuel,5)
{
	setType("taxi");
}

Taxi::~Taxi() {}

bool Taxi::hasPossession() const
{
	return custormers;
}

void Taxi::setCustomers(bool test)
{
	customers = test;
}

int Taxi::getCount()
{
	return count;
}

void Taxi::incCount()
{
	count++;
}

void printInfo() const {
	cout << "Type: Taxi" << endl;
	if(customers)
		cout << "Has customers" << endl;
	else
		cout << "No customers" << endl;
	cout << "Number of doors: " << getDoors() << endl;
	cout << "Number of Cylinders: " << getCylinders() << endl;
	cout << "Color: " << getColor() << endl;
	cout << "Tank Size: " << getTankSize() << endl;
	cout << "Fuel Level: " << getFuelLevel() << endl;
	cout << "TransmissionType(): " << getTransmissionType() << endl;
}

void horn() const {
	cout << "beep beep" << endl;
}
