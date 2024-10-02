/* Create a simple class Car with two attributes: Company, model, highest speed.
Write a C++ code to instantiate 3 objects of the Car class and set these attributes to your favorite car. Then,
print out the Company, model, highest speed of the Car object.*/

#include <iostream>
using namespace std;
class car{
    public:
    string company,model;
    int highest_speed ;
    
    car(string c, string m,int s )
    {
      company=c ;
      model=m;
      highest_speed=s;
    }
    void display()
    {
        cout<<company<<endl<<model<<endl<<highest_speed<<endl;
    }
};
int main()
{
    car obj("Rolls-Royce","103EX", 250 );
    obj.display();

    return 0;
}
