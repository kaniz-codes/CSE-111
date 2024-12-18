# Final CT 01

## Theory
![Image](image.jpg)

### What is abstraction?
Ans: Abstraction means hiding the internal implementation details of a class or function and exposing only the necessary functionality to the user. This helps in reducing complexity and makes the code easier to maintain.

#### Example

```cpp
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

```

### What is Inheritance?
Ans: The capability of deriving properties from another class is called inheritance.

**Parent class/super/base class:** The class whose properties are derived.

**Child class/sub/derived class:** The class who inherits properties from parent class.

![Image](image2.jpg)