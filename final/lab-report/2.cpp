#include <iostream>
using namespace std;

class Shape {
public:
    void fun() {
        cout << "This is a shape" << endl;
    }
};

class Polygon : public Shape {
public:
    void fun() {
        cout << "Polygon is a shape" << endl;
    } 
};

class Rectangle : public Polygon {
public:
    void fun() {
        cout << "Rectangle is a polygon" << endl;
    }
};

class Triangle : public Polygon {
public:
    void fun() {
        cout << "Triangle is a polygon" << endl;
    }
};

class Square : public Rectangle {
public:
    void fun() {
        cout << "Square is a rectangle" << endl;
    }
};

int main() {
    Shape shape;
    Polygon polygon;
    Rectangle rectangle;
    Triangle triangle;
    Square square;

    shape.fun();
    polygon.fun();
    rectangle.fun();
    triangle.fun();
    square.fun();
    cout<<"Kaniz Fatema"<<endl<<"20245103154"<<endl;
    return 0;
}
