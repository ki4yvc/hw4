#include "truck.h"

Truck::Truck();
{

}

Truck::Truck(double);
{

}

Truck::Truck(double fuel, string color) : Vehicle(fuel, color);
{

}

Truck::~Truck();
{

}

virtual bool Truck::hasPossession() const;
{
	if(cargo){
		return true;
	} else {
		return false;
	}
}

void Truck::setCargo(bool);
{
	if(bool){
		cargo = true;
	} else {
		cargoo = false;
	}
}

static int Truck::getCount();
{
	return count;
}

static void Truck::incCount();
{
	count++;
}