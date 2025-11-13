#include <iostream>
using namespace std;

class students {
    private:
    int roll;
    string name;
    int mathmarks;
    int phymarks;
    int chemmarks;
    public:
    students(int r,string n, int m, int p, int c) {
        roll=r;
        name=n;
        mathmarks=m;
        phymarks=p;
        chemmarks=c;
    }
    int total() {
        return mathmarks+phymarks+chemmarks;
    }
    char grade() {
        float average=total()/3.0f;
        if(average > 60)
            return 'A';
            else if(average>=40 && average<60)
                return 'B';
            else
                return 'C';
            
        
    }
};

int main() {
    int roll;
    string name;
    int m,p,c;
    cout<<"enter roll number";
    cin>>roll;
    cout<<"enter name";
    cin>>name;
    cout<<"enter physics marks";
    cin>>p;
    cout<<"enter math marks";
    cin>>m;
    cout<<"enter chemistry marks";
    cin>>c;
students d(roll,name,m,p,c);
cout<<"total marks"<<d.total()<<endl;
cout<<"grade"<<d.grade()<<endl;


}