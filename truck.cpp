#include "truck.h"
int Truck::count = 0;
Truck::Truck()
{
	count++;
}

Truck::Truck(double)
{
	count++;
}

Truck::Truck(double fuel, string color)
{
	count++;
}

Truck::~Truck()
{
	count--;
}

virtual bool Truck::hasPossession() const
{
	if(cargo){
		return true;
	} else {
		return false;
	}
}

void Truck::setCargo(bool)
{
	if(bool){
		cargo = true;
	} else {
		cargoo = false;
	}
}

static int Truck::getCount()
{
	return count;
}

static void Truck::incCount()
{
	count++;
}
