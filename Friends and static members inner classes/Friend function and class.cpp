#include<iostream>
using namespace std;
// accessing private & protected members fromm class A to B using friend fucntion
class two;
class one{
    private:
    int a;
    protected:
    int b;
    public:
    int c;
    friend class two;
};

class two{
    public:
    one s;
    void access(){
        s.a=20;
        s.b=10;
        s.c=5;
    }
    void display(){
        cout<<s.a<<endl;
        cout<<s.b<<endl;
        cout<<s.c<<endl;
    }
};


int main()
{
 two t;
t.access();
t.display();
}