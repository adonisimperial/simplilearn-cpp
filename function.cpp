#include<iostream>
using namespace std;

int sum(int a, int b)
{
    int c;
    c=a+b;
    return c;
}

int max(int a, int b)
{
    if(a>b)
    {
        cout<<"The larger number is "<<a;
    }
    else if(b>a)
    {
        cout<<"The larger number is "<<b;
    }
    else
    {
        cout<<"Both numbers are equal";
    }
    return 0;
}

int main()
{
    int n1;
    int n2;
    int s;

    cout<<"Enter the first number :"<<endl;
    cin>>n1;

    cout<<"Enter the second number :"<<endl;
    cin>>n2;

    s=sum(n1, n2);
    cout<<"The sum is: "<<s<<endl;

    max(n1, n2);
}