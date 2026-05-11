#include<iostream>
using namespace std;

int sum(int num)
{
    // this will get an error so we do the other way
    /*if(num!=0)
    {
        return num+sum(num-1);
    }*/
    if(num==0)
    {
        return 0;
    }

    return num+sum(num-1);
}

int factorial(int num)
{
    if(num<1)
    {
        return 1;
    }
    else
    {
        return num*factorial(num-1);
    }
}

int fibo(int num)
{
    if(num<=1)
    {
        return num;
    }
    else
    {
        return fibo(num-1)+fibo(num-2);
    }
}

int main()
{
    int num;

    cout<<"Enter the number: ";
    cin>>num;

    cout<<"The sum is: "<<sum(num)<<endl;
    cout<<"The factorial is: "<<factorial(num)<<endl;

    cout<<"The fibonacci sequence is: ";

    for(int i=0;i<num;i++)
    {
        cout<<fibo(i)<<" ";
    }
    return 0;
}