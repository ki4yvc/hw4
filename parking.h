#include <vector>

class ParkingLot
{
  public:
    ParkingLot(string id);
    ~ParkingLot();
    string getID() const;
    void addVehicle(Vehicle *);
    void printVehicles() const;
    void printTotals() const;

  private:
    /* write a declaration for a container to hold either
       a vector of Vehicle pointers OR a linked-list of
       Vehicle pointers.
    */ 


    string id;
    list<Vehicle *> allVehicles;
    list<Vehicle *>::iterator iter;
};
