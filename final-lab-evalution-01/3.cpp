#include <iostream>
using namespace std;
class Vehicle 
{
protected:
    string name;
    float ratePerDay; 

public:
    virtual float RentCost() 
    {

    }
};

class Car : public Vehicle {
public:
    Car() 
    {
        name = "Car";
        ratePerDay = 2000;
    }

    float RentCost(int days)
    {
        return days * ratePerDay;
    }
};

class Bike : public Vehicle
{
public:
    Bike() {
        name = "Bike";
        ratePerDay = 500;
    }
    float RentCost(int days)
    {
        return days * ratePerDay;
    }
};

int main() {
    int days;
    cout << "Enter number of days: ";
    cin >> days;
    Car car;
    Bike bike;
    float carCost = car.RentCost(days);
    float bikeCost = bike.RentCost(days);

    cout << "Car rental cost for " << days << " days: " << carCost << " Tk" << endl;
    cout << "Bike rental cost for " << days << " days: " << bikeCost << " Tk" << endl;

    return 0;
}
