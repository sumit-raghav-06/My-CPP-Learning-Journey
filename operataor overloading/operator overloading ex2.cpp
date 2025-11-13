#include <iostream>
using namespace std;

class complex {
public:
    int real, img;

    complex(int r=0, int i=0) {
        real = r;
        img = i;
    }

    complex operator + (complex c) { // Overloading +
        complex temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }
};

int main() {
    complex c1(5,7), c2(6,8), c3;
    c3 = c1 + c2;   // ✅ Cleaner, natural syntax
    cout << c3.real << "+i" << c3.img;
}
