#include<bits/stdc++.h>
using namespace std;

int subarray(vector<int>&arr)
{
    int ans = 0;
    for(int i = 0; i < arr.size(); i++)
    {
        int sum = 0;
        for(int j = i ; j < arr.size(); j++)
        {
            sum += arr[j]; 
            if(sum == 0)
            {
                ans = max(ans,j - i + 1);
            }
        }
    }
    return ans;
}
int main()
{
    vector<int>arr = {15,-2,2,-8,1,7,10,23};

    cout<<"Length of the largest sub array with sum 0 is : "<<subarray(arr);

    return 0;

}
