#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int start = 0,end = 0,l;
    int min = INT_MAX,sum = 0;
    //finding minimum in element
    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    for(int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        if(sum>min)
        {
            min = sum;
            start = l;
            end = i;
        }
        if(sum<0)
        {
            sum = 0;
            l = 1 + i;
        }
    }
    cout<<"Starting and Ending index of subarr are : "<<start<<" and "<<end<<endl;
    cout <<"The sum of subarray is : "<< min;
}
//Time Complexity = O(n).
//Space Complexity = O(n).