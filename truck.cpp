
/* Name: Dylan Wilcox (dawilco sec 1), Nicholas Gustafson (ngustaf sec 2)
 * Course: CPSC1070
 * Assignment: HW #4
 * Due: November 29th, 2016
 *
 * Description: Truck controller class.
 */

#include "truck.h"
#include "vehicle.h"
//initializes the const int for truck
int Truck::count = 0;

/*defualt constructor for truck
	calls on the defualt constructor for vehicle
	then sets the type to "truck"

	input:
		none
	output:
		creates the object
*/
Truck::Truck():Vehicle()
{
	setType("truck");
}

/*constructor that only takes the fuel for the truck
	calls on the regular constructor for the vehicle
	class with static values for everything except
	the fuel and sets the type to "truck"

	input:
		fuel - double for the fuel level in the
			truck to start
	output:
		creates the object
*/
Truck::Truck(double fuel):Vehicle(4,8,"Blue",10.0,fuel,6)
{
	setType("truck");
}

/*constructor that takes an input file and calls the vehicle
	constructor that takes an input file and creates the
	vehicle and then set the type to "truck"

	input:
		infile - ifstream& which is the file input
	output:
		creates the object
*/
Truck::Truck(ifstream &infile):Vehicle(infile) {
	setType("truck");
}

/*regular constructor takes in the fuel and color of the truck
	and calls of the regular constructor of the vehicle
	and uses static values for everything except fuel
	and color then sets the type to "truck"

	input:
		fuel - double for the inial fuel level
			in the truck
		color - string for the color of the truck
	output:
		creates the truck object
*/
Truck::Truck(double fuel, string color):Vehicle(4,8,color,10.0,fuel,6)
{
	setType("truck");
}

//does nothing
Truck::~Truck() { }

/*returns true if the truck is carrying cargo and false if
	the truck is carrying nothing

	input:
		none
	output:
		cargo - bool to see if the truck is
			carrying something
*/
bool Truck::hasPossession() const
{
	return cargo;
}

/*sets the cargo if the truck is carrying something or not

	input:
		test - bool if the truck is
			carrying something
	output:
		none
*/
void Truck::setCargo(bool test)
{
	cargo = test;
}

/*returns however many trucks there are

	input:
		none
	output:
		count - int of the number of trucks made
*/
int Truck::getCount()
{
	return count;
}

/*increase the counter for the amount of trucks are made

	input:
		none
	output:
		none
*/
void Truck::incCount()
{
	count++;
}

/*prints the information of the truck and calls on the
	vehicle method to do so

	input:
		none
	output:
		prints out all the information of the truck
*/
void Truck::printInfo() const {
	cout << "Truck:" << endl;
	Vehicle::printInfo();
	if(cargo)
		cout << "Has cargo" << endl;
	else
		cout << "No cargo" << endl;
}

/*prints out what it would sound like if
	the horn where to go off

	input:
		none
	output:
		prints "honk honk"
*/
void Truck::horn() const {
	cout << "honk honk" << endl;
}
