#include<iostream>
using namespace std;

int FindDuplicate(int arr[],int n)
{ 
    for (int i = 0; i < n-1; i++)
    {
        int j = i + 1;
        if(arr[i] == arr[j])
        {
            return arr[i];
        }
        j++;   
    }
    
}
int main()
{
    int arr[] = {3,2,4,4,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Duplicate element is :"<<FindDuplicate(arr,n);
    return 0;
}