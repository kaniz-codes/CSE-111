
#include <iostream>
using namespace std;
class game{
    public:
    int kill_count,death_count;
    game(int k, int d)
    {
        kill_count=k;
        death_count=d;
    }
   // void calculate(game obj , game obj1);
};
void calculate(game obj , game obj1)
{
    game obj3(0,0);
    if((obj.kill_count && obj.death_count)>(obj1.kill_count && obj1.death_count))
    {
        obj3.kill_count=obj.kill_count;
         obj3.death_count=obj.death_count;
    }
    else
    {
        obj3.kill_count=obj1.kill_count;
         obj3.death_count=obj1.death_count;
    }
    
    if(obj3.kill_count==obj.kill_count)
    {
        cout<<"obj wins"<<endl;
    }
    else
    {
        cout<<"obj1 wins"<<endl;
    }
    
}
int main() 
{
    game obj(10, 20),obj1(13,26);
    calculate(obj, obj1);
    
    return 0;
}
