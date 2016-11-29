/* Name: Dylan Wilcox (dawilco sec 1), Nicholas Gustafson (ngustaf sec 2)
 * Course: CPSC1070
 * Assignment: HW #4
 * Due: November 29th, 2016
 *
 * Description: Taxi class and methods.
 */

#include "taxi.h"
int Taxi::count = 0;
Taxi::Taxi()
{
	count++;
}

Taxi::Taxi(double fuel, string color) : Vehicle(4, 6, color, 10.0, fuel, 5)
{
	count++;
}

Taxi::Taxi(double)
{
	count++;
}

Taxi::~Taxi()
{
	count--;
}

bool Taxi::hasPossession() const
{
	if(customers){
		return true;
	} else {
		return false;
	}
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
