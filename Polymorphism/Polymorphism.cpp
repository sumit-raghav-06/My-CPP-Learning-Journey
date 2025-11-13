#include <iostream>
using namespace std;

class basecar
{
public:
    virtual void start() { cout << "base car start" << endl; }
    // virtual void start()=0; // pure virtual function why we need base car body if no use we need it because to achieve polymorphism
};

class ferrari : public basecar
{
public:
    void start() { cout << "ferrari started" << endl; }
};

class audi : public basecar
{
public:
    void start() { cout << "audi started" << endl; }
};

int main()
{
    ferrari f;
    basecar *c = new ferrari;
    c->start();
    c = new audi();
    c->start();
}