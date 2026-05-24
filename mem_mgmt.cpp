#include<iostream>
using namespace std;

int main()
{
    // Sample 1
    int *ptr1;
    int *ptr2;
    int *ptr3;
    int avg;

    ptr1 = new int;
    ptr2 = new int;
    ptr3 = new int;

    cout<< "Enter first number: ";
    cin>> *ptr1;
    cout<< "Enter second number: ";
    cin>> *ptr2;
    cout<< "Enter third number: ";
    cin>> *ptr3;

    avg = (*ptr1 + *ptr2 + *ptr3) / 3;

    cout<< "Average is: " << avg << endl;

    delete ptr1;
    delete ptr2;
    delete ptr3;

    // Sample 2
    int size;

    cout<< "Enter the size: ";
    cin>>size;
    
    int *ptr;

    ptr = new int[size];

    cout<< "Enter the elements" << endl;
    
    for (int i=0;i<size;i++)
    {
        cout<<"Element: ";
        cin>>ptr[i];
    }

    cout<< "Elements that you have entered: " << endl;

    for(int i=0; i<size; i++)
    {
        cout<< "Element: " << ptr[i] << endl;
    }

    delete[] ptr;
}

/*
Compile: g++ mem_mgmt.cpp -o mem_mgmt
Run: .\mem_mgmt.exe
*/