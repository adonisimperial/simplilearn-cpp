#include<iostream>
using namespace std;

// FIRST SAMPLE OF FRIEND
class Salary
{
    private:
        int sal=0;

        friend int increment(Salary s);

    // Another way to initialize sal instead of int sal=0
    /*
    public:
        Salary() { sal = 30000; } // Start everyone at 30k
        friend int increment(Salary s);
    */
};

int increment(Salary s)
{
    s.sal = s.sal+7000;
    return s.sal;
}

// SECOND SAMPLE OF FRIEND
class Num2;

class Num1
{
    private:
        int n1;

        friend class Num2;

    public:
        Num1() : n1(11) {}  // check the comment/notes inside the Num2 constructor regarding this approach
};

class Num2
{
    private:
        int n2;

    public:
        // CONSTRUCTOR
        // Assignemt in Constructor Body
        /* Object is created first and initialized with a "garbage" value then replaces the value with 65 at in the body or {}
        It's a two-step process: Create -> Assign
        Num2()
        {
            n2=65;
        }
        */
        Num2() : n2(65) {}  // this uses member initializer list and more efficient than the commented approach above

        int avg()
        {
            Num1 obj1;
            return (obj1.n1+n2)/2;
        }
};

// THIRD SAMPLE OF FRIEND
class B;

class A
{
    int x;

    public:
        void assign(int i)
        {
            x=i;
        }

        friend void product(A, B);
};

class B
{
    int y;

    public:
        void assign(int i)
        {
            y=i;
        }

        friend void product(A, B);
};

void product(A a, B b)
{
    cout<<a.x*b.y;
}

// INITIALIZATION OF FRIEND AT THE MAIN
int main()
{
    // For the first sample
    Salary s;
    cout<<"Increment is: ";
    cout<<increment(s)<<endl;

    // For the second sample
    Num2 obj2;
    cout<<"Average is: ";
    cout<< obj2.avg()<<endl;

    // For the third sample
    A a;
    B b;
    a.assign(45);
    b.assign(20);
    product(a,b);

    return 0;
}