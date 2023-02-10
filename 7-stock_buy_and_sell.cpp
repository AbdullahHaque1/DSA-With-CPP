#include<iostream>
using namespace std;

int max_profit(int arr[],int n)
{
    int profit = 0,s = 0,e = n-1;
    for(int i = 0; i < e; i++ )
    {
        for(int j = i+1; j <= e; j++)
        {
            if(arr[j]>arr[i])
            {
                int currentprofit =  arr[j] - arr[i];
                profit = max(profit,currentprofit);
            }
        }
    }
}   
int main()
{
    int arr[] = {7,1,5,3,6,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<" Maximum Profit is :"<<max_profit(arr,n);
    return 0;
}

//Time Complexity : O(n^2)
//Space Complexity : O(1)