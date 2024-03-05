#include <iostream>
using namespace std;

class Animal {
protected:
    int energy;

public:
    Animal() : energy(50) {}

    void sleep() {
        cout << "I'm sleeping" << endl;
        energy += 1;
    }

    void eat() {
        cout << "I'm eating" << endl;
        energy += 1;
    }

    int getEnergy() const {
        return energy;
    }
};

class Dog : public Animal {
private:
    string name;

public:
    Dog(string n) : name(n) {}

    void bark() {
        cout << "Bark!" << endl;
        energy -= 1;
    }

    void run() {
        cout << "Running!" << endl;
        energy -= 3;
    }
};

int main() {
    Dog dog1("Max");
    for(int i = 4; i < 9; i++) {
        dog1.sleep(); 
        dog1.run();   
        dog1.eat();  
        dog1.bark(); 

        cout << dog1.getEnergy() << endl;
    }

    return 0;
}
