#include <iostream>
using namespace std;

class character
{
protected:
    string name;
    int health;

public:
    character(string n, int h) : name(n), health(h) {}
    virtual void attack() = 0;
    virtual void takedamage(int dmg)
    {
        health -= dmg;
        cout << "took " << dmg << "damage .HP: " << health << endl;
    }
    virtual ~character(){cout << name << "removed from battlefiled 💀\n";}
};

class warrior : public character{
    public:
    warrior(string n) : character(n,120){}
    void attack() override {cout<< name<<"slashes with sword \n";}
    ~warrior() {cout<< name<<"(warrior) destroyed. \n";}
};

class Mage : public character {
public:
    Mage(string n) : character(n, 80) {}
    void attack() override { cout << name << " casts a fireball! 🔥\n"; }
    ~Mage() { cout << name << " (Mage) destroyed.\n"; }
};

class Boss : public character {
public:
    Boss(string n) : character(n, 200) {}
    void attack() override { cout << name << " unleashes a mega attack! 💥\n"; }
    ~Boss() { cout << name << " (Boss) destroyed.\n"; }
};

int main()
{
    character* hero1 = new warrior("Ares");
    character* hero2 = new Mage("Merlin");
    character* boss = new Boss("Carl 😈");

    hero1->attack();
    boss->takedamage(30);

    hero2->attack();
    boss->takedamage(50);

    boss->attack();
    hero1->takedamage(70);

    delete hero1;
    delete hero2;
    delete boss;

    return 0;
}

