#include<iostream>
using namespace std;

// Sample 1
/*
Since reference is an alias, it needs something to refer to or where it will reference
*/
int n;  // global variable

int& club()
{
    return n;   // here it returns the global variable, without the global variable it will give an error because there is nothing to reference
}

int main()
{
    // Sample 1's function implementation
    club() = 75;
    cout<<n;

    // Sample 2: multiple references
    int num = 70;
    int& ref1 = num;
    int& ref2 = num;

    cout<<endl;
    cout<<"Value of num is: "<<num<<endl;
    cout<<"Value of ref1 is: "<<ref1<<endl;
    cout<<"Value of ref2 is: "<<ref2<<endl;

    ref1 = ref1 + 10;

    cout<<"Value of num is: "<<num<<endl;

    ref2 = ref2 + 5;

    cout<<"Value of num is: "<<num<<endl;

    return 0;
}

/*
    Compile: g++ reference.cpp -o reference
    Run: .\reference.exe   
    */