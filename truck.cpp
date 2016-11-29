
/* Name: Dylan Wilcox (dawilco sec 1), Nicholas Gustafson (ngustaf sec 2)
 * Course: CPSC1070
 * Assignment: HW #4
 * Due: November 29th, 2016
 *
 * Description: Truck controller class.
 */

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

Truck::Truck(double fuel, string color) : Vehicle(fuel, color)
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
