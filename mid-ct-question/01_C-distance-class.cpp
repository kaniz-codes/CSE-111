/* 1. c) Define the functions of the Distance class outside the class:
class Distance {
public:
	int feet;
	float inches;
	void addData(int f, float in);
	void showData();
};
*/

#include <iostream>
using namespace std;

class Distance
{
public:
	int feet;
	float inches;
	void addData(int f, float in);
	void showData();
};

void Distance ::addData(int f, float in)
{
	feet = f;
	inches = in;
}

void Distance ::showData()
{
	cout << "Feet: " << feet << ", Inches: " << inches << endl;
}

int main()
{
	Distance obj;
	obj.addData(474, 5767);
	obj.showData();
}
