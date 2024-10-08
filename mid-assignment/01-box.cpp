/*  =====
 * Implement a class Box with attributes length, width, and height. Write a function combineBoxes() that accepts two Box objects, combines their dimensions by adding corresponding sides, and returns the resulting Box object. Demonstrate the combination of two boxes using object passing and returning.
 ** ====
 */

#include <iostream>
using namespace std;

class Box
{
public:
	float length, width, height;

	// Constructor
	Box(float l, float w, float h)
	{
		length = l;
		width = w;
		height = h;
	}

	// Combine two Box objects
	Box combineBoxes(Box obj1, Box obj2)
	{
		Box combinedBox(
			obj1.length + obj2.length,
			obj1.width + obj2.width,
			obj1.height + obj2.height);
		return combinedBox;
	}
};

int main()
{
	Box obj1(10, 20, 30);
	Box obj2(16, 28, 39);
	Box obj3 = obj1.combineBoxes(obj1, obj2);

	cout << obj3.length << endl;
	cout << obj3.width << endl;
	cout << obj3.height << endl;

	cout << endl;
	cout << "Kaniz Fatema" << endl;
	cout << "20245103154";
	return 0;
}
