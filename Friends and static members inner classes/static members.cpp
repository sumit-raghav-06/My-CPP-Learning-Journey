#include<iostream>
using namespace std;

class player{
    public:
    static int count; //declaration

    player(){
        count++; // every time object is created, increase count
    }
};

// definition outside class
int player::count=0;


int main()
{
 player blackops;
 player action_kamen;
 player zod_raghav;
player random;
 cout<<"Total players created= " <<player::count;
}