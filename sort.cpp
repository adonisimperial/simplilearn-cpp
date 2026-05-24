#include<iostream>
using namespace std;

// Quick Sort Functions
int partition(int arr[], int start, int end)
{
    int pivot = arr[end];
    int i = start - 1;
    int temp;

    for(int j = start; j < end; j++)
    {
        if(arr[j] < pivot)
        {
            i++;

            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    temp = arr[i + 1];
    arr[i + 1] = arr[end];
    arr[end] = temp;

    return i + 1;
}

void quickSort(int arr[], int start, int end)
{
    if(start < end)
    {
        int pi = partition(arr, start, end);    // pi is partition index

        quickSort(arr, start, pi - 1);
        quickSort(arr, pi + 1, end);
    }
}

int main()
{
    int i;
    int j;
    int temp;

    int arr[8]={12,3,1,5,18,10,7,35};

    cout<<"Unsorted array: \n";

    for (int i=0;i<8;i++)
    {
        cout<<arr[i]<<"\t";
    }

    cout<<endl;

    // Bubble Sort
    int arr0[8]={12,3,1,5,18,10,7,35};

    for(int i=0;i<8;i++)
    {
        for(int j=0;j<7-i;j++)
        {
            if(arr0[j]>arr0[j+1])
            {
                temp=arr0[j];
                arr0[j]=arr0[j+1];
                arr0[j+1]=temp;
            }
        }
    }

    cout<<"Bubble sort: \n";

    for(int i=0;i<8;i++)
    {
        cout<<arr0[i]<<"\t";
    }
    
    cout<<endl;

    // Selection Sort
    int arr1[8]={12,3,1,5,18,10,7,35};

    for(int i=0;i<8;i++)
    {
        for(int j=i;j<8;j++)
        {
            if(arr1[j]<arr1[i])
            {
                temp=arr1[i];
                arr1[i]=arr1[j];
                arr1[j]=temp;
            }
        }
    }

    cout<<"Selection sort: \n";

    for (int i=0;i<8;i++)
    {
        cout<<arr1[i]<<"\t";
    }

    cout<<endl;

    // Insertion Sort
    int arr2[8]={12,3,1,5,18,10,7,35};

    for(int i=1;i<8;i++)
    {
        temp=arr2[i];
        int j=i-1;

        while(arr2[j]>temp && j>=0)
        {
            arr2[j+1]=arr2[j];
            j--;
        }

        arr2[j+1]=temp;
    }

    cout<<"Insertion sort: \n";

    for(int i=0;i<8;i++)
    {
        cout<<arr2[i]<<"\t";
    }

    cout<<endl;

    // Quick Sort
    int arr3[8]={12,3,1,5,18,10,7,35};

    quickSort(arr3, 0, 7);  // 7 is 8-1

    cout<<"Quick sort: \n";

    for(int i=0;i<8;i++)
    {
        cout<<arr3[i]<<"\t";
    }

    return 0;
}