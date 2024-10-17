#include <iostream>
using namespace std;
class Teacher{
    int salary;
    public:
    string Name, Short_code, Address;
    void get_data()
    {
        cout<< "Name";
        cin>>Name;
        cout<< "Short_code";
        cin>>Short_code;
        cout<< "Address";
        cin>>Address;
        cout<< "salary";
        cin>>salary;
    }

    void display_data()
    {
        cout<< Name<<endl<<Short_code<<endl<<Address<<endl<<salary<<endl;
    }
};
int main()
{
    Teacher obj[2];
    int i;
    for(i=0;i<3;i++)
    {
        obj[i].get_data();
    }
    string x;
    cin>>x;
    for(i=0;i<3;i++)
    {
        if (obj[i].Short_code==x)
        {
            obj[i].display_data();
        }
        else
        {
            cout<<"Not found";
        }
    }
return 0;
}
