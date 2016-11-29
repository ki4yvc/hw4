/* Name: Dylan Wilcox (dawilco sec 1), Nicholas Gustafson (ngustaf sec 2)
 * Course: CPSC1070
 * Assignment: HW #4
 * Due: November 29th, 2016
 *
 * Description: ParkingLot Controller that stores vehicles in list
 */

#include "parking.h"
#include "truck.h"
#include "taxi.h"
using namespace std;
ParkingLot::ParkingLot(string id)
{
	this->id = id;
}

ParkingLot::~ParkingLot()
{
	for(int i = 0; i<(int)allVehicles.size(); i++)
                delete allVehicles[i];
}

string ParkingLot::getID() const
{
	return id;
}

void ParkingLot::addVehicle(Vehicle* v)
{
	allVehicles.push_back(v);
}

void ParkingLot::printVehicles() const
{
	for(int i = 0; i<(int)allVehicles.size(); i++)
		allVehicles[i]->printInfo();
}

void ParkingLot::printTotals() const
{
	int trucks = -1;
	int taxis = -1;
	int i = 0;
	while((trucks < 0 || taxis < 0) && i < (int)allVehicles.size()) {
		if(allVehicles[i]->getType() == "truck")
			trucks = Truck::getCount();
		else if(allVehicles[i]->getType() == "taxi")
			taxis = Taxi::getCount();
		i++;
	}
	if(i == (int)allVehicles.size()) {
		if(trucks < 0)
			trucks = 0;
		if(taxis < 0)
			taxis = 0;
	}
	std::cout << "Total trucks: " << trucks << std::endl;
	std::cout << "Total taxis: " << taxis << std::endl;
	std::cout << "Total vehicles: " << trucks+taxis << std::endl;
}

void ParkingLot::traffic() const {
	for(int i = 0; i<(int)allVehicles.size(); i++)
                allVehicles[i]->horn();
}
