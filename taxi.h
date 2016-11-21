#ifndef TAXI_H
#define TAXI_H

#include <string>
#include "vehicle.h"
using namespace std;

class Taxi : public Vehicle
{
  public:
   Taxi();
   Taxi(double fuel, string color);
   Taxi(double);
   ~Taxi();
   virtual bool hasPossession() const;
   void setCustomers(bool);
   static int getCount();
   static void incCount();

   /**  COMPLETE FOR HOMEWORK 4                                **/
   /**  write declaration for pure virtual function horn       **/
   /**  write declaration for pure virtual function printInfo  **/
   /**  write declaration for virtual function hasPossession   **/

  private:
   bool customers;
   static int count;

};

#endif
   
