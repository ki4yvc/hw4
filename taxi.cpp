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
	return customers;
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

void Taxi::printInfo() const {
	cout << "Type: Taxi" << endl;
	Vehicle::print();
	if(customers)
		cout << "Has customers" << endl;
	else
		cout << "No customers" << endl;
}

void Taxi::horn() const {
	cout << "beep beep" << endl;
}
