
/* Name: Dylan Wilcox (dawilco sec 1), Nicholas Gustafson (ngustaf sec 2)
 * Course: CPSC1070
 * Assignment: HW #4
 * Due: November 29th, 2016
 *
 * Description: Truck controller class.
 */

#include "truck.h"
#include "vehicle.h"
int Truck::count = 0;
Truck::Truck():Vehicle()
{
	setType("truck");
}

Truck::Truck(double fuel):Vehicle(4,8,"Blue",10.0,fuel,6)
{
	setType("truck");
}

Truck::Truck(ifstream &infile):Vehicle(infile) {
	setType("truck");
}

Truck::Truck(double fuel, string color) : Vehicle(4, 8, color, 10.0, fuel, 6)
{
	setType("truck");
}

Truck::~Truck() { }

bool Truck::hasPossession() const
{
	return cargo;
}

void Truck::setCargo(bool test)
{
	cargo = test;
}

int Truck::getCount()
{
	return count;
}

void Truck::incCount()
{
	count++;
}

void Truck::printInfo() const {
	cout << "Truck:" << endl;
	Vehicle::printInfo();
	if(cargo)
		cout << "Has cargo" << endl;
	else
		cout << "No cargo" << endl;
}

void Truck::horn() const {
	cout << "honk honk" << endl;
}
