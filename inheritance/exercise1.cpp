// creating a hybrid calculator simple+scientific which have both operations
#include<iostream>
#include <cmath>//for power
using namespace std;

class simplecal {
    public:
    int a;
    int b;
    void addsum(int a, int b) {
        cout<<"the sum is "<<a+b <<endl;
    }
    void multiply(int a,int b){
        cout<<"product "<<a*b<<endl;
    }
    void divison(int a, int b){
        if (b != 0) {
            cout<<"divison"<<a/b<<endl;
        }
    }
    
    
};

class sci_calc{
    public:
    void powerofdigit(int a,int b) {
        cout<<a<<"^" <<b<<"="<<pow(a,b)<<endl;
    }
    void squreroot(int a) {
        cout <<"rootsq " <<a<<sqrt(a)<<endl;
    }
};

class hybridcal : public simplecal,public sci_calc{};

/*int main()
{
    hybridcal calc;
 int a=4, b=2;
 cout<< "=== simple" <<endl;
 calc.addsum(a,b);
 calc.multiply(a,b);
 calc.divison(a,b);


 cout <<"sci cal         " << endl;
 calc.powerofdigit(a,b);
 calc.squreroot(a);
}*/
// user interaction
int main() {
    hybridcal calc;
    int choice, a,b;
    cout<<"===================" << endl;
    cout <<"   HYBRID CALCULATOR  " << endl;
    cout<<"======================"<<endl;

    cout<< "\nenter two numbers ";
    cin>>a>>b;
    cout<<"\n== simple calculator" << endl;
    calc.addsum(a,b);
    calc.multiply(a, b);
    calc.divison(a,b);

    cout<<" \n=== scientific cal" << endl;
    calc.powerofdigit(a,b);
    calc.squreroot(a);
}
