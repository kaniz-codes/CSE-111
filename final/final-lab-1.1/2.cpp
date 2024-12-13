/*
Create a base class Member with attributes name and membershipType. Add a virtual method calculateFee() to calculate the annual membership fee.
Derive classes GoldMember, SilverMember, and BronzeMember with overridden calculateFee() methods:
GoldMember: Fee = 10,000.
SilverMember: Fee = 7,000.
BronzeMember: Fee = 5,000.
Write a program to display the membership fees for each type.
*/

#include<iostream>
using namespace std;
class Member
{
//protected:
public:
    string name,membershipType;

   /* Member(string n, string type)
    {
        name=n;
        membershipType=type;
    }
 */
    virtual float calculatefee()
    {

    }
};
class GoldMember : public Member
{
    public:
    int gold;
    GoldMember (int g)
    {
        gold=g;
    }
    float calculatefee()
    {
        return gold*12;
    }
};
class SilverMember : public Member
{
    public:
    int silver;
    SilverMember(int s)
    {
        silver=s;
    }
    float calculatefee()
    {
        return silver*12;
    }
};
class BronzeMember : public Member
{
    public:
    int bronze;
    BronzeMember(int b)
    {
        bronze=b;
    }
    float calculatefee()
    {
        return bronze*12;
    }
};

int main()
{
    GoldMember obj(10000);
    SilverMember obj1(7000);
    BronzeMember obj2(5000);

    /*float Gold= obj.GoldMember;
    float Silver= obj.SilverMember;
    float Bronze= obj.BronzeMember;
*/
  Member *p = &obj;
    float result1 = p->calculatefee();
    cout << "gold: " << result1 << endl;

    p = &obj1;
    float result2 = p->calculatefee();
    cout << "Silver: " << result2 << endl;

    p = &obj2;
    float result3 = p->calculatefee();
    cout << "Bronze: " << result3 << endl;

    //cout<<Gold<<endl<<Silver<<endl<<Bronze;
}
