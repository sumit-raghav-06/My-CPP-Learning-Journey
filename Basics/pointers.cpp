/* #include<iostream>
using namespace std;

int main() {
    int a=10;
    int *p=&a;

    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;
    return 0;
}

#include<iostream>
using namespace std;

int main() {
    int *p=new int [5];
    p[0]=12;
    p[1]=13;
    cout<<p[0]<<endl; // 13 output
    delete []p; // delete heap memory
    p=nullptr; // set p to no object
    cout<<p[1]<<endl; // tht's why error
}*/

// creating custom size of array in heap memory
#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"enter the size";
    cin>>size;
    int *p=new int [size];
    cout << "Pointer size (not array size): " << sizeof p << " bytes" << endl;
    cout << "Estimated array size: " << size * sizeof(int) << " bytes" << endl;

    delete []p;
    return 0;
}