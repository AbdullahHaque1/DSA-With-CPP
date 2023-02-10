#include<iostream>
using namespace std;

int Sorting(int arr[],int n)
{
    int i,j;
    for(i = 0; i < n;i++)
    {
        for(j = 0; j <= n - i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int printArr(int arr[] , int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[] = {0,1,2,0,2,1,0,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    Sorting(arr,n);
    cout<<"Sorted 0's,1's and 2's : ";
    printArr(arr,n);
    return 0;
}