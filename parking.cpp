#include "parking.h"

ParkingLot::ParkingLot(string id);
{
	this->id = id;
}

ParkingLot::~ParkingLot();
{

}

string ParkingLot::getID() const;
{
	return id;
}

void ParkingLot::addVehicle(Vehicle* v);
{
	allVehicles.push_front(v);
}

void ParkingLot::printVehicles() const;
{
	iter = allVehicles.begin();

	for(int i = 0; i < allVehicles.size(); i++){
		(*iter)->print();
		iter++;
	}
}

void ParkingLot::printTotals() const;
{

}