#ifndef VEHICLE_H
#define VEHICLE_H

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
   static int getCount();
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

   /**  COMPLETE FOR HOMEWORK 4                          **/
   /** write declaration for pure virtual function horn  **/
   /** write declaration for pure virtual function print **/

   virtual void horn()=0;
   virtual void print()=0;

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
   
