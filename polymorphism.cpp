#include<iostream>
using namespace std;

/*
Types of Polymorphism
1. Compile Time Polymorphism
    a. Function Overloading
    b. Operation Overloading
2. Runtime Polymorphism
    can be achieve through
    a. Function Overriding
    b. Virtual Function
*/

// Compile Time: Function Overloading
class King
{
    public:
    void pro(int a, int b)
    {
        cout<< a * b << endl;
    }

    void pro(int a, int b, int c, int d, int e)
    {
        cout<< (a + b + c + d + e) << endl;
    }
};

// Compile Time: Operation Overloading
class Overload
{
    private:
    int n1;
    int n2;

    public:
    Overload(int num1, int num2)
    {
        int res;
        
        n1 = num1;
        n2 = num2;
        res = n1 - n2;

        cout<< "res: " << res << endl;
    }

    /*
    syntax of the operator function:
        operator symbol (arguments)

        where symbol can be +, -, *, /, ==
    */
    void operator-()    // "-" is the operator keyword
    {
        n1 = -n1;
        n2 = -n2;
    }

    void display()
    {
        cout<< "n1 = " << n1 << "\n" <<  "n2 = " << n2 << endl;
    }
};

// Runtime: Function Overriding
class Parent
{
    public:
    void print()
    {
        cout<< "This is the function of base class." << endl;
    }
};

class Child
{
    public:
    void print()
    {
        cout<< "This is the function of derived class." << endl;
    }
};

// Runtime: Virtual Function
class Base
{
    public:
    virtual void print()
    {
        cout<< "This is the function of the base class" << endl;
    }
};

class Derived: public Base
{
    public:
    void print()
    {
        cout<< "This is the function of the derived class";
    }
};

int main()
{
    King k;
    k.pro(10, 20);
    k.pro(12, 23, 20, 62, 6);

    Overload ol(6, 8);
    -ol;    // The line -ol looks for a matching operator-() function inside the class
    ol.display();

    Child obj;
    obj.print();

    Base* b;
    Derived d;
    b = &d;
    b->print();

    return 0;
}