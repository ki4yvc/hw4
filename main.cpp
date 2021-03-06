/* Name: Dylan Wilcox (dawilco sec 1), Nicholas Gustafson (ngustaf sec 2)
 * Course: CPSC1070
 * Assignment: HW #4
 * Due: November 29th, 2016
 *
 * Description: Main class to test all functions.
 */

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include "vehicle.h"
#include "truck.h"
#include "taxi.h"
#include "parking.h"

using namespace std;

int main(int argc, char *argv[])
{
   ParkingLot lot("Lot C1");

   Vehicle *v;
   ifstream infile;
   infile.open(argv[1]);
   string type;
   double fuel;
   string color;
   v=new Vehicle(infile);
   infile >> type;

   while(!infile.eof())
   {
      infile >> fuel >> color;

      if(type == "taxi")
      {
         v = new Taxi(fuel, color);
         lot.addVehicle(v);
         Taxi::incCount();
      }
      else if(type == "truck")
      {
         v = new Truck(fuel, color);
         lot.addVehicle(v);
         Truck::incCount();
      }
      else
      {
         cout << "\nerror\n\n";
         exit(1);
      }

      infile >> type;
   }


   cout << "\nThe vehicles get stuck in traffic and respond: \n";
   //calls the method to the lot tomake all the horns go off
   lot.traffic();

   lot.printVehicles();

   cout << endl;
   cout << lot.getID() << " count:";
   lot.printTotals();

   return 0;
}
