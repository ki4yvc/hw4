#ifndef PARKINGLOT_H
#define PARKINGLOT_H
/* Name: Dylan Wilcox (dawilco sec 1), Nicholas Gustafson (ngustaf sec 2)
 * Course: CPSC1070
 * Assignment: HW #4
 * Due: November 29th, 2016
 *
 * Description: Header file for parking lot class
 */

#include <vector>
#include <string>
#include <iostream>
#include "vehicle.h"

using namespace std;

class ParkingLot
{
  public:
    ParkingLot(string id);//creates a ParkingLot object
    ~ParkingLot();//delete the container, if necessary
    string getID() const;
    void addVehicle(Vehicle *);//adds each vehicle to the lot
    void printVehicles() const;//invokes the printInfo() method
	//of each vehicle via the container of base class pointers
    void printTotals() const;//invokes the getCount method of
	//the Taxi class and the Truck class to print the
	//number of Taxis and the number of Trucks, adds the two
	//values together to print the total number of vehicles.
    void traffic() const;

  private:
    /* write a declaration for a container to hold either
       a vector of Vehicle pointers OR a linked-list of
       Vehicle pointers.
    */

    string id;
    vector<Vehicle *> allVehicles;
};

#endif
