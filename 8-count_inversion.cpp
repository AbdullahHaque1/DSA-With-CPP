#include<iostream>
using namespace std;

int main()
{
    int arr[] = {2,5,1,3,4},a = 0;
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n-1; i++)
    {
        for (int  j = 1+i; j < n; j++)
        {
            if(arr[i]>arr[j])
            {
                a++;
            }
        }
        
    }

    cout<<"Number of inversion : " <<a;
    
}
