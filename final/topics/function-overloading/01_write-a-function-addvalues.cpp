#include<iostream>
using namespace std;

void addvalues(int a, int b)
{
    cout<<"Sum of A+B: "<<a+b<<endl;
}

void addvalues(int a, int b, int c)
{
    cout<<"Sum of A+B+C: "<<a+b+c<<endl;
}

void addvalues(int a, int b, int c, int d)
{
    cout<<"Sum of A+B+C+D: "<<a+b+c+d<<endl;
}

int main()
{
    int a,b,c,d;
    cout<<"Enter 4 Numbers: "<<endl;
    cin>>a>>b>>c>>d;
    addvalues(a,b);
    addvalues(a,b,c);
    addvalues(a,b,c,d);
    cout << endl << "Kaniz Fatema" << endl;
    cout << "Thanks for running the code!" << endl;
    cout << "Follow for more!!" << endl;
    return 0;
}
