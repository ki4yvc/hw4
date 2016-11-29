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
   Vehicle(ifstream &infile);
   Vehicle(const int doors, const int cylinders, string color,
           const double tank, double initialfuel,
           const int transmission);//assigns the parameter to the
	//corresponding data members
   static int getCount();
   virtual ~Vehicle();//does nothing
   void setType(string type);
   void setColor(string color);
   void setFuelLevel(double amount);//verifies that amount is
	//in the range (0, tanksize]. if not, assign fuel Level
	//the value 5.0
   const string getType() const;
   const int getDoors() const;
   const int getCylinders() const;
   const string getColor() const;
   const double getTankSize() const;
   const double getFuelLevel() const;
   const int getTransmissionType() const;

   virtual void horn() const;
   virtual void printInfo() const;

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
   
