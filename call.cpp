#include<iostream>
using namespace std;

void Salary_Change(int s)
{
    s=3000;
    cout<<"Value inside function: "<< s <<endl;
}

void Increment(int &i)   // in the tutorial, it uses &i but I tried to remove the & and the change does not work
{
    i=i+5000;
    cout<<"Value inside function: "<< i <<endl;
}

int main()
{
    //call by value
    int sal=2700;
    Salary_Change(sal);
    cout<<"Value inside main: "<< sal <<endl;

    //call by reference
    int increment=2700;
    Increment(increment);
    cout<<"Value inside main: "<< increment <<endl;
    return 0;
}