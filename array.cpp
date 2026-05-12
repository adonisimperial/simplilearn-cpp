#include<iostream>
using namespace std;

int main()
{
    // Sample 1
    int coupon[6]={5,8,7,3,9,1};

    for(int i=0;i<6;i++)
    {
        cout<<coupon[i]<<", ";
    }

    // Sample 2
    //int sum=0;
    int n;

    cout<<endl<<"Enter a value of iteration: ";
    cin>>n;

    int array[n];

    for(int j=0;j<n;j++)
    {
        cout<<coupon[j]<<", ";
    }

    // 2d Array
    int a[3][3]={{5,4,1},{2,7,9},{1,3,8}};

    cout<<endl;

    for(int x=0;x<3;x++)
    {
        for(int y=0;y<3;y++)
        {
            cout<<a[x][y]<<" ";
        }
        cout<<endl;
    }
}