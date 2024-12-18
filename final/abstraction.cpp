#include <iostream>
using namespace std;

class Animal {
public:
    
    virtual void makeSound()
    {
       cout<<"Kaniz"<<endl;
    }
   
    void sleep() {
        cout << "This animal is sleeping." << endl;
    }
};
class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Woof Woof!" << endl;
    }
};
class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Meow Meow!" << endl;
    }
};
int main() 
{
    Dog dog;
    Cat cat;

    dog.makeSound(); 
    dog.sleep();    

    cat.makeSound(); 
    cat.sleep();  

    return 0;
}
