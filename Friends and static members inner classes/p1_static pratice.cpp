#include<iostream>
using namespace std;

class player{
    public:
    static int count; // shared by alll objects

    player(){
        count++;
        cout<< "player created . total players: " <<count<<endl;
    }
    ~player() {
        count--;
        cout<< "player destroyed. total players: " <<count<<endl;
    }
};

int player::count=0;

int main()
{
 cout<<"starting players: " <<player::count<<endl;
 player p1; //count =1
 player p2;//count =2
 {
    player p3;
 }
}