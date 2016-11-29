#include "taxi.h"
int Taxi::count = 0;
Taxi::Taxi()
{
	count++;
}

Taxi::Taxi(double fuel, string color) : Vehicle(fuel, color)
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

virtual bool Taxi::hasPossession() const
{
	if(customers){
		return true;
	} else {
		return false;
	}
}

void Taxi::setCustomers(bool)
{
	if(bool){
		customers = true;
	} else {
		customers = false;
	}
}

static int Taxi::getCount()
{
	return count;
}

static void Taxi::incCount()
{
	count++;
}
