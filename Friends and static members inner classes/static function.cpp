#include<iostream>
using namespace std;

class player {
    public:
    static int count;
    static void showcount(){
        cout<<"players count"<<count <<endl;
    }
};

int player::count =90;

int main()
{
 player::showcount();
 player p1;
 player::count++;
 player::showcount();
}