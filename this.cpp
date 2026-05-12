#include<iostream>
using namespace std;

// Sample function for the 'This' pointer
class A
{
    private:
        int x;
        int y;
        int z;
    
    public:
        void set(int x, int y, int z)
        {
            this->x=x;
            this->y=y;
            this->z=z;
            // not using this, the value of x, y, z in the main are 0s.
        }
        void print()
        {
            cout<<"x value is: "<<x<<endl;
            cout<<"y value is: "<<y<<endl;
            cout<<"z value is: "<<z<<endl;
        }
};

// Sample function to be used in the method chaining
class Chain
{
    int num;

    public:
        Chain & assign(int num)
        {
            this->num=num+100;
            return *this;
        }
        void display()
        {
            cout<<"The value of num is: "<<num<<endl;
        }
};

int main()
{
    // implementation for the function with the sample of 'This' pointer
    A obj;
    obj.set(20, 54, 65);
    obj.print();

    // execution for the method chaining
    Chain n1;
    n1.assign(100).display();
    
    return 0;
}