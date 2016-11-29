#ifndef TRUCK_H
#define TRUCK_H
/* Name: Dylan Wilcox (dawilco sec 1), Nicholas Gustafson (ngustaf sec 2)
 * Course: CPSC1070
 * Assignment: HW #4
 * Due: November 29th, 2016
 *
 * Description: Truck header file.
 */

#include <string>
#include "vehicle.h"

using namespace std;

class Truck : public Vehicle
{
  public:
   Truck();
   Truck(double);
   Truck(ifstream &infile);
   Truck(double fuel, string color);//the initializtion list will
	//consist of constant values for the number of doors, cylinders,
	//tank size, and the transmission type. The fuel and color
	//parameters are used for the other values needed by the Vehicle
	//constructor. Sets the type field to "Truck".
   ~Truck(); //does nothing
   virtual bool hasPossession() const;//returns cargo
   void setCargo(bool);
   static int getCount();//returns the truck count
   static void incCount();//increments the count for trucks
   virtual void printInfo() const;
   virtual void horn() const;

   /**  COMPLETE FOR HOMEWORK 4                              **/
   /** write declaration for pure virtual function horn      **/
   /** write declaration for pure virtual function printInfo **/
   /** write declaration for virtual function hasPossession  **/

  private:
   bool cargo;
   static int count;

};

#endif
   
