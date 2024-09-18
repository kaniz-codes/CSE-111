/* Create a simple class game with two attributes: kill_count, death_count.
First, make 2 objects of this class using a constructor.
Then, make a non-member function where the function takes another object, sets the kill_count and death_count attributes' value,
and returns the object to the main function.
Lastly, print all the object values. */

#include <iostream>
using namespace std;

class game {
public:
    int kill_count, death_count;

    game(int k, int d) 
    {
        kill_count = k;
        death_count = d;
    }

    void display() {
        cout << "Kill Count: " << kill_count << endl;
        cout << "Death Count: " << death_count << endl;
    }
};

game update(game obj, int a, int b) 
{
    obj.kill_count = a;
    obj.death_count = b;
    return obj;
}

int main() 
{

    game player(20, 100),player1(70, 10);

    player.display();
    player1.display();

    player1 = update(player1, 78, 42);

    player1.display();

    return 0;
}
