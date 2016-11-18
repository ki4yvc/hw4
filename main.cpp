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
   /** COMPLETE FOR HOMEWORK 4  **/
   /** write the code to call the horn method for each vehicle **/



   lot.printVehicles();

   cout << endl;
   cout << lot.getID() << " count:"; 
   lot.printTotals();  

   
   return 0;
}
