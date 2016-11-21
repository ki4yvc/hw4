#include "taxi.h"

Taxi::Taxi();
{

}

Taxi::Taxi(double fuel, string color) : Vehicle(fuel, color);
{
	// Vehicle data is going to come first

	// now the track data can come through
}

Taxi::Taxi(double);
{

}

Taxi::~Taxi();
{

}

virtual bool Taxi::hasPossession() const;
{
	if(customers){
		return true;
	} else {
		return false;
	}
}

void Taxi::setCustomers(bool);
{
	if(bool){
		customers = true;
	} else {
		customers = false;
	}
}

static int Taxi::getCount();
{
	return count;
}

static void Taxi::incCount();
{
	count++;
}
