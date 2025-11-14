#include<iostream>
using namespace std;

class example{
    private:
    int a;
    protected:
    int b;
    public:
    int c;
    friend void access(); // here we add a friend fucntion so zero errors
};
void access(){
    example f; 
    f.a=10; // can't access 
    f.b=5;   // cant access without adding friend funtion in example class(upper class)
    f.c=9;
}

// we can access only upon object not direct if do a=10, it'll show error

int main()
{
 
}