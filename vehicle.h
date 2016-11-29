#ifndef VEHICLE_H
#define VEHICLE_H
/* Name: Dylan Wilcox (dawilco sec 1), Nicholas Gustafson (ngustaf sec 2)
 * Course: CPSC1070
 * Assignment: HW #4
 * Due: November 29th, 2016
 *
 * Description: Header for vehicle object
 */


#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Vehicle
{
  public:
   Vehicle();
   Vehicle(const int doors, const int cylinders, string color,
           const double tank, double initialfuel,
           const int transmission);
   virtual ~Vehicle();
   void setType(string type);
   void setColor(string color);
   void setFuelLevel(double amount);
   const string getType() const;
   const int getDoors() const;
   const int getCylinders() const;
   const string getColor() const;
   const double getTankSize() const;
   const double getFuelLevel() const;
   const int getTransmissionType() const;
   static int getCount();

   virtual void horn();
   virtual void print();

  protected:
   string type;
   const int numDoors;
   const int numCylinders;
   string color;
   const double tankSize;
   double fuelLevel;
   const int transmissionType;
};

#endif
   
