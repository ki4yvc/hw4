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
    ParkingLot(string id);
    ~ParkingLot();
    string getID() const;
    void addVehicle(Vehicle *);
    void printVehicles() const;
    void printTotals() const;
    void traffic() const;

  private:
    string id;
    vector<Vehicle *> allVehicles;
};

#endif
