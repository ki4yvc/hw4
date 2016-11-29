/* Name: Dylan Wilcox (dawilco sec 1), Nicholas Gustafson (ngustaf sec 2)
 * Course: CPSC1070
 * Assignment: HW #4
 * Due: November 29th, 2016
 *
 * Description: ParkingLot Controller that stores vehicles in list
 */

#include "parking.h"
using namespace std;
ParkingLot::ParkingLot(string id)
{
	this->id = id;
}

ParkingLot::~ParkingLot()
{

}

string ParkingLot::getID() const
{
	return id;
}

void ParkingLot::addVehicle(Vehicle* v)
{
	allVehicles.push_front(v);
}

void ParkingLot::printVehicles() const
{
	iter = allVehicles.begin();

	for(int i = 0; i < allVehicles.size(); i++){
		(*iter)->print();
		iter++;
	}
}

void ParkingLot::printTotals() const
{
	int trucks = -1;
	int taxis = -1;
	iter = allVehicles.begin();
	while((trucks < 0 || taxis < 0) && iter != NULL) {
		if(iter->getType() == "Truck") {
			trucks = iter->getCount();
		} else {
			taxis = iter->getCount();
		}
		iter.advance();
	}
	if(iter == NULL) {
		if(trucks < 0)
			trucks = 0;
		else
			taxis = 0;
	}
	cout << "Total trucks: " << trucks << endl;
	cout << "Total taxis: " << taxis << endl;
	cout << "Total vehicles: " << trucks+taxis << endl;
}
