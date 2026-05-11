#include<iostream>
using namespace std;

int main()
{
    /*
    cout<<"Hello World!";
    return 0;   // return 0 means success; without this, the compilerautomatically insert it.

    Compile: g++ hello.cpp -o hello
    Run: .\hello.exe   
    */

    string s;

    cout<<"Enter a string ";

    getline(cin, s);

    cout<<"You have entered: ";
    cout<<s<<endl;

    s.push_back('Y');
    cout<<"After using push back "<<s<<endl;

    s.pop_back();
    cout<<"After using pop back "<<s<<endl;

    return 0;
}