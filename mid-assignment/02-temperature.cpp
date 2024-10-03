/*  =====
 * Design a class Temperature with attributes celsius and fahrenheit. Create a constructor that initializes the temperature in Celsius and an inline function to convert it to Fahrenheit. Display the temperature in both Celsius and Fahrenheit using an object.
 ** ====
 */

#include <iostream>
using namespace std;

class Temperature
{
public:
	float celsius;
	float fahrenheit;

	Temperature(float c)
	{
		celsius = c;
		fahrenheit = celsiusToFahrenheit();
	}

	inline float celsiusToFahrenheit()
	{
		return (celsius * 9.0 / 5.0) + 32;
	}

	void display()
	{
		cout << "Celsius: " << celsius << "°C" << endl;
		cout << "Fahrenheit: " << fahrenheit << "°F" << endl;
	}
};

int main()
{
	Temperature temp(25);
	temp.display();

	cout << endl;
	cout << "Kaniz Fatema" << endl;
	cout << "20245103154";
	return 0;
}
