#include<iostream>
using namespace std;

template<class T1, class T2>
float funavg(T1 a, T2 b){
    float avg= (a+b)/2.0;
    return avg;
}


int main()
{
    float a;
    a = funavg(5,2);
    printf(" the avg. of these numbers %f", a);
    return 0;
 
}