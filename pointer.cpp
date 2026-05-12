#include<iostream>
using namespace std;

int main()
{
    // Sample 1
    int val=105;    // normal integer
    int* ptr=&val;  // pointer ptr storing the address of 'x'

    /*or
    int *ptr;
    
    ptr=&val;
    */

    cout<<"Value of val is: "<<val<<endl;   // the value
    cout<<"Value of &val is: "<<&val<<endl; // memory same with ptr
    cout<<"Value of the ptr is: "<<ptr<<endl;   // outputs the memory address (0xe6e75ffb64)
    cout<<"Value of *ptr is: "<<*ptr<<endl; //outputs the value at that address (105)
    // can use ++, --, +, - to pointers

    // Sample 2
    int *pointer;
    int array[]={5,17,20,7,9,4,6};

    pointer=array;

    for(int i=0;i<7;i++)
    {
        cout<<*pointer<<endl;
        pointer++;
    }

    // The 'This' in C++
    /*
    Syntax for referring instance variable:
        this->class_variable=value;
    Syntax for referring to current object of class:
        this*

    'This' Pointer refers to itself
    */ 

    // Method Chaining

    return 0;
}