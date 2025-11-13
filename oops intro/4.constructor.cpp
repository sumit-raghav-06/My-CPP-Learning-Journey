#include <iostream>
using namespace std;

class Rectangle
{
    private:
    int length;
    int breadth;
    public:
/*default or non parameter constructor*/
Rectangle(){
    length =1;
    breadth =1;
}

/*parameter constructor*/
Rectangle(int l,int b) {
    length=l;
    breadth=b;
}

/*copy constructor*/
/*copy constructor*/
Rectangle(const Rectangle &rect) {
    length = rect.length;
    breadth = rect.breadth;
}



    
    int getlenght(){
        return length;
    }
    int getBreadth(){
        return breadth;
    }
    void setLength(int l) {
        if(l<0)
        cout<<"error";
        else
        length=l;
        

    }
    void setBreadth(int b) {
        if(b<0)
        cout<<"invalid value";
        else
        breadth=b;
        
    }

    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length*breadth);
    }
};
int main() {
    Rectangle r1(10,5);
    Rectangle r2=r1;
    /*r1.setLength(60);
    r1.setBreadth(50);
    r1.setBreadth(70 );
    r1.setLength(-60);*/

    cout<<r1.area()<<endl;
    cout<<r2.area()<<endl;
    cout<<r1.getlenght()<<endl;
}