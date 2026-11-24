
#include <iostream>
#include <string>
using namespace std;

class Animal
{
private:
    string name;
    int age;

public:

    void setName(string n)
    {
        name = n;
    }

    void setAge(int a)
    {
        age = a;
    }

    string getName()
    {
        return name;
    }

    int getAge()
    {
        return age;
    }

    void displayInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Mammal : public Animal
{
public:
    void feedBaby()
    {
        cout << "Feeding baby mammal." << endl;
    }
};

class Bird : public Animal
{
public:
    void layEgg()
    {
        cout << "Laying an egg." << endl;
    }
};

class Reptile : public Animal
{
public:
    void shedSkin()
    {
        cout << "Shedding skin." << endl;
    }
};

int main()
{
    Mammal m;
    Bird b;
    Reptile r;

    m.setName("Lion");
    m.setAge(5);

    cout << "\nMAMMAL" << endl;
    m.displayInfo();
    m.feedBaby();

    b.setName("Parrot");
    b.setAge(2);

    cout << "\nBIRD" << endl;
    b.displayInfo();
    b.layEgg();

    r.setName("Snake");
    r.setAge(3);

    cout << "\nREPTILE" << endl;
    r.displayInfo();
    r.shedSkin();

    return 0;
}
