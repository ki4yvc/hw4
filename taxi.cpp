/* Name: Dylan Wilcox (dawilco sec 1), Nicholas Gustafson (ngustaf sec 2)
 * Course: CPSC1070
 * Assignment: HW #4
 * Due: November 29th, 2016
 *
 * Description: Taxi class and methods.
 */

#include "taxi.h"
//initializes the const int for taxi
int Taxi::count = 0;

/*defualt constructor for taxi
        calls on the defualt constructor for vehicle
        then sets the type to "taxi"

        input:
                none
        output:
                creates the object
*/
Taxi::Taxi():Vehicle()
{
	setType("taxi");
}

/*constructor that takes an input file and calls the vehicle
        constructor that takes an input file and creates the
        vehicle and then set the type to "taxi"

        input:
                infile - ifstream& which is the file input
        output:
                creates the object
*/
Taxi::Taxi(ifstream &infile):Vehicle(infile) {
	setType("taxi");
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
Taxi::Taxi(double fuel, string color) : Vehicle(4, 6, color, 10.0, fuel, 5)
{
	setType("taxi");
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
Taxi::Taxi(double fuel):Vehicle(4,6,"Yellow",10.0, fuel,5)
{
	setType("taxi");
}

//does nothing
Taxi::~Taxi() {}

/*returns true if the taxi is carrying people and false if
        the taxi is carrying nobody

        input:
                none
        output:
                customers - bool to see if the taxi is
                        carrying anyone
*/
bool Taxi::hasPossession() const
{
	return customers;
}

/*sets the customers if the taxi is carrying anybody or not

        input:
                test - bool if the taxi is
                        carrying anyone
        output:
                none
*/
void Taxi::setCustomers(bool test)
{
	customers = test;
}

/*returns however many taxis there are

        input:
                none
        output:
                count - int of the number of taxis made
*/
int Taxi::getCount()
{
	return count;
}

/*increase the counter for the amount of taxis are made

        input:
                none
        output:
                none
*/
void Taxi::incCount()
{
	count++;
}

/*prints the information of the taxi and calls on the
        vehicle method to do so

        input:
                none
        output:
                prints out all the information of the taxi
*/
void Taxi::printInfo() const {
	cout << "Type: Taxi" << endl;
	Vehicle::printInfo();
	if(customers)
		cout << "Has customers" << endl;
	else
		cout << "No customers" << endl;
}

/*prints out what it would sound like if
        the horn where to go off

        input:
                none
        output:
                prints "beep beep"
*/
void Taxi::horn() const {
	cout << "beep beep" << endl;
}
