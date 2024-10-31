/* Create a class named Number that has private members value1 and value2.
Write a friend function addValues that takes two Number objects and returns the sum of their values in a third object.*/

#include<iostream>
using namespace std;

class Number{
  float value1, value2;
  public:

    Number(float v1, float v2)
      {
         value1=v1;
         value2= v2;
      }
  friend Number addvalues( Number obj, Number obj1);
  void functionDisplay()
  {
      cout<<"value1 "<<value1<<endl;
      cout<<"value2 "<<value2<<endl;
      cout<<endl<<"Kaniz Fatema"<<endl;
      cout<<"Thanks for running the code!"<<endl;
      cout<<"Follow for more!!"<<endl;
  }

};
Number addvalues(Number obj, Number obj1)
{
    Number ob(0,0);

    ob.value1 = obj.value1+obj1.value1;
    ob.value2 = obj.value2+obj1.value2;
    return ob;
}

int main()
{
    Number obj(9.46,5.467),obj1(10.10, 20.40), obj3(0,0);
    obj3 = addvalues(obj, obj1);
    obj3.functionDisplay();

}


