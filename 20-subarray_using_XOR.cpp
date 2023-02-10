#include<bits/stdc++.h>
using namespace std;

int Subarray(vector<int>&arr,int k)
{
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        int subxor = 0;
        for (int j = i; j < arr.size(); j++)
        {
            subxor =subxor^arr[j];
            if(subxor == k)
            {
                ans++;
            }
        }
        
    }
    return ans;
    
}
int main()
{
    vector<int> arr = {4, 2, 2, 6, 4};
    int k;
    cin>>k;
    cout<<"No of subarray using xor is : "<<Subarray(arr,k);
}