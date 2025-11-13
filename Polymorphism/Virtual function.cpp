#include<iostream>
using namespace std;

class basecar{
    public:
    //void feature(){cout<<"base car feature"<<endl;}
    virtual void feature(){cout<<"base car feature"<<endl;}
};

class advancecar:public basecar{public:void feature(){cout<<"Advance car feature"<<endl;}};

int main()
{
    advancecar d;
 basecar *ptr=&d;
 //ptr->feature(); // base class function output because not use of virtual function in baseca class
 ptr->feature(); // now derived class function will be called
}