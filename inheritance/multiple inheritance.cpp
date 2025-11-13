#include<iostream>
using namespace std;

class base1{
    protected:
    int base1int;
    public:
    void setbase1int(int a) {
        base1int =a;
    }
};

class base2{
    protected:
    int base2int;
    public:
    void setbaseint2(int b) {
        base2int = b;
    }
};

class derived: public base1,public base2{
    public:
    void show(){
        cout<< "the value of base 1 " << base1int<<endl;
        cout<< "the value of base 2 " << base2int<<endl;
    }
};

int main()
{
 derived d;
 d.setbase1int(24);
 d.setbaseint2(6);
 d.show();
}