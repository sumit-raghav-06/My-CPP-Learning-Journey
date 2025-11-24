#include<iostream>
using namespace std;

template <class T>
class raghav
{
    public:
    T data;
    raghav(T a)
    {
        data =a;
    }
    void display();
};

template <class T>
void raghav<T> :: display(){
    cout<<data;
}

int main()
{
 raghav<int> r(5.8);
cout<< r.data<<endl;
r.display();
return 0;
}