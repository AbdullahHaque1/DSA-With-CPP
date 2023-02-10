#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {3,33,4,6,7,22,5,8,9};
    sort(arr.begin(),arr.end());
    int count = 1;
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i] + 1 == arr[i+1])
        {
            count++;
        }
    }
    cout<<" longest consecutive element sequence is : "<<count;
    
}