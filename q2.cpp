
#include <iostream>
#include <string>
using namespace std;

// Base class
class Person
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

    virtual void displayInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class Employee
class Employee : public Person
{
private:
    int employeeID;

public:

    void setEmployeeID(int id)
    {
        employeeID = id;
    }

    void displayInfo() override
    {
        cout << "\n--- Employee Details ---" << endl;

        cout << "Name: " << getName() << endl;
        cout << "Age: " << getAge() << endl;
        cout << "Employee ID: " << employeeID << endl;
    }
};

// Derived class Student
class Student : public Person
{
private:
    int studentID;

public:

    void setStudentID(int id)
    {
        studentID = id;
    }

    void displayInfo() override
    {
        cout << "\n--- Student Details ---" << endl;

        cout << "Name: " << getName() << endl;
        cout << "Age: " << getAge() << endl;
        cout << "Student ID: " << studentID << endl;
    }
};

int main()
{
    Person p;
    Employee e;
    Student s;

    // Person object
    p.setName("Ali");
    p.setAge(40);

    cout << "--- Person Details ---" << endl;
    p.displayInfo();

    // Employee object
    e.setName("Ahmed");
    e.setAge(30);
    e.setEmployeeID(101);

    e.displayInfo();

    // Student object
    s.setName("Husnain");
    s.setAge(18);
    s.setStudentID(202);

    s.displayInfo();

    return 0;
}
