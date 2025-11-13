#include<iostream>
using namespace std;
class base{
    public:
    void display()
    {
        cout<<"base dispaly"<<endl;
    }
};

class advanced:public base{
    public:
    void display()
    {
        cout<<"advance display"<<endl;
    }

};



int main()
{
    advanced a;
    //a.display();
    a.base::display();
    
}