#include<iostream>
using namespace std;
class TimeManipulation{
public:
    TimeManipulation()
    {

    };
TimeManipulation(int h1, int h2)
{
    cout<<"Interval Hour: "<<h1-h2<<endl;
    cout<<"Interval Sum Hour: "<<h1+h2<<endl;
}
TimeManipulation(int h1, int h2,int m1, int m2)
{
    cout<<"Interval Hour: "<<h1-h2<<endl;
    cout<<"Interval Sum Hour: "<<h1+h2<<endl;
    cout<<"Interval minute: "<<m1-m2<<endl;
    cout<<"Interval sum minute: "<<m1+m2<<endl;
}
TimeManipulation(int h1, int h2,int m1, int m2, int s1, int s2)
{
    cout<<"Interval Hour: "<<h1-h2<<endl;
    cout<<"Interval Sum Hour: "<<h1+h2<<endl;
    cout<<"Interval minute: "<<m1-m2<<endl;
    cout<<"Interval sum minute: "<<m1+m2<<endl;
    cout<<"Interval second: "<<s1-s2<<endl;
    cout<<"Interval Sum second: "<<s1+s2<<endl;
}
};

int main()
{
    int x;
    TimeManipulation obj;
    cout<<"Enter 1 for Hour"<<endl<<"Enter 2 for Hour,minute "<<endl<<"Enter 3 for Hour,minute,second"<<endl;
    cin>>x;

    if(x==1)
    {
        int h1,h2;
        //TimeManipulation obj;
        cout<<"Enter Hour1: ";
        cin>>h1;
        cout<<"Enter Hour2: ";
        cin>>h2;
        TimeManipulation obj (h1,h2);
    }
    else if(x==2)
    {
        int h1,h2,m1,m2;
        //TimeManipulation obj;
        cout<<"Enter Hour1: ";
        cin>>h1;
        cout<<"Enter Hour2: ";
        cin>>h2;
        cout<<"Enter minute1: ";
        cin>>m1;
        cout<<"Enter minute2: ";
        cin>>m2;
        TimeManipulation obj (h1,h2,m1,m2);
        cout << endl << "Kaniz Fatema" << endl;
        cout << "Thanks for running the code!" << endl;
        cout << "Follow for more!!" << endl;
    }
    else if(x==2)
    {
        int h1,h2,m1,m2,s1,s2;
        //TimeManipulation obj;
        cout<<"Enter Hour1: ";
        cin>>h1;
        cout<<"Enter Hour2: ";
        cin>>h2;
        cout<<"Enter minute1: ";
        cin>>m1;
        cout<<"Enter minute2: ";
        cin>>m2;
        cout<<"Enter second1: ";
        cin>>s1;
        cout<<"Enter second2: ";
        cin>>s2;
        TimeManipulation obj (h1,h2,m1,m2,s1,s2);
    }
    else
    {
        cout<<"Error"<<endl;
    }
}
