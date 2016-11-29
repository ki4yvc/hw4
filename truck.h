/* Name: Dylan Wilcox (dawilco sec 1), Nicholas Gustafson (ngustaf sec 2)
 * Course: CPSC1070
 * Assignment: HW #4
 * Due: November 29th, 2016
 *
 * Description: Truck header file.
 */

#ifndef TRUCK_H
#define TRUCK_H

#include <string>
#include "vehicle.h"
using namespace std;

class Truck : public Vehicle
{
  public:
   Truck();
   Truck(double);
   Truck(double fuel, string color);
   ~Truck();
   virtual bool hasPossession() const;
   void setCargo(bool);
   static int getCount();
   static void incCount();

   /**  COMPLETE FOR HOMEWORK 4                              **/
   /** write declaration for pure virtual function horn      **/
   /** write declaration for pure virtual function printInfo **/
   /** write declaration for virtual function hasPossession  **/

  private:
   bool cargo;
   static int count;

};

#endif
   
