/* Name: Dylan Wilcox (dawilco sec 1), Nicholas Gustafson (ngustaf sec 2)
 * Course: CPSC1070
 * Assignment: HW #4
 * Due: November 29th, 2016
 *
 * Description: ParkingLot Controller that stores vehicles in vector
 */

#include "parking.h"
#include "truck.h"
#include "taxi.h"
using namespace std;
/*constructor for the parking lot

	input:
		id - string for the name of the parking lot
	output:
		creates the object
*/
ParkingLot::ParkingLot(string id)
{
	this->id = id;
}

/*deletes the vehicles in the parking lot

	input:
		none
	output:
		deletes the vehicles in the lot
*/
ParkingLot::~ParkingLot()
{
	for(int i = 0; i<(int)allVehicles.size(); i++)
                delete allVehicles[i];
}

/*returns the name of the parking lot

	input:
		none
	output:
		id - string for the name of the lot
*/
string ParkingLot::getID() const
{
	return id;
}

/*adds the vehicles to the parkinglot

	input:
		v - Vehicle* to add to the lot
	output:
		the vehicle is added to the vector
*/
void ParkingLot::addVehicle(Vehicle* v)
{
	allVehicles.push_back(v);
}

/*goes through the vector of vehicles in the lot
	and prints all the info of each vehicle

	input:
		none
	ouput:
		calls all the printInfo methodes of
			the vehicles
*/
void ParkingLot::printVehicles() const
{
	for(int i = 0; i<(int)allVehicles.size(); i++)
		allVehicles[i]->printInfo();
}

/*prints the total number of each vehicle and the totoal
	number of all the vehicles

	input:
		none
	output:
		prints the total number of trucks and taxis
			and the total number of vehciles
*/
void ParkingLot::printTotals() const
{
	int trucks = -1;
	int taxis = -1;
	int i = 0;
	//goes through and finds a truck and a taxi and gets the total
	//number of each and saves it in truck and taxi
	while((trucks < 0 || taxis < 0) && i < (int)allVehicles.size()) {
		if(allVehicles[i]->getType() == "truck")
			trucks = Truck::getCount();
		else if(allVehicles[i]->getType() == "taxi")
			taxis = Taxi::getCount();
		i++;
	}
	//testing if the inial values are still there
	//if they are then change them to 0
	if(i == (int)allVehicles.size()) {
		if(trucks < 0)
			trucks = 0;
		if(taxis < 0)
			taxis = 0;
	}
	//print statments
	std::cout << "Total trucks: " << trucks << std::endl;
	std::cout << "Total taxis: " << taxis << std::endl;
	std::cout << "Total vehicles: " << trucks+taxis << std::endl;
}

/*goes through the vector and calls all the horn functions
	of each of the vehicles

	input:
		none
	ouput:
		"honk honk" or "beep beep" is printed depending
			if the vehicle is either a truck or a
			taxi respectivly
*/
void ParkingLot::traffic() const {
	for(int i = 0; i<(int)allVehicles.size(); i++)
                allVehicles[i]->horn();
}
