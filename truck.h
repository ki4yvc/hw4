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
   Truck(double fuel, string color);
   ~Truck();
   virtual bool hasPossession() const;
   void setCargo(bool);
   static int getCount();
   static void incCount();
   virtual void printInfo() const;
   virtual void horn() const;

  private:
   bool cargo;
   static int count;
};

#endif
