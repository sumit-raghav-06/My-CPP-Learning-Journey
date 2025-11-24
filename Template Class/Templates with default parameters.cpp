#include<iostream>
using namespace std;

template <class T1=int, class T2=float, class T3=char>
class raghav{
    public:
    T1 a;
    T2 b;
    T3 c;
    raghav(T1 x, T2 y, T3 z){
        a =x;
        b = y;
        c = z;
    }
    void display() {
        cout<<"val. of a "<<a<<endl;
        cout<<"val. of b "<<b<<endl;
        cout<<"val. of c "<<c<<endl;
    }
};

int main()
{
 raghav<> r(4,6.4,'c');
 r.display();
 cout<<endl;
 raghav<float,char,char> h(1.6,'o' 'b');
 h.display();
}