#include <iostream>
using namespace std;

class student
{
    int rollnumber;

public:
    void setrollnumber(int);
    void getrollnumber(void);
};
void student ::setrollnumber(int r)
{
    rollnumber = r;
}
void student ::getrollnumber()
{
    cout << "your roll number " << rollnumber << endl;
}
class exam : public student
{
protected:
    float physics;
    float maths;

public:
    void setmarks(float, float);
    void getmarks(void);
};
void exam ::setmarks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}

void exam ::getmarks()
{
    cout<< "obtained marks in physics " << physics << endl;
    cout<< "obtained marks in maths " << maths << endl;
}
class result :public exam
{
    float percentage;

public:
    void getresult() {
        getmarks();
    getrollnumber();
    cout << "your percenatge is " << (maths + physics) / 2 << "%" << endl;
}
};

int main()
{
    result sabina;
    sabina.setrollnumber(1);
    sabina.setmarks(100.00,100.00);
    sabina.getresult();
}