//Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.

#include<iostream>
#include<vector>
#include<set>

using namespace std;
vector<int> find_majority(vector<int> &arr)
{
    int n = arr.size();
    vector<int>ans;
    for(int i = 0; i < n; i++ )
    {
        int count = 0;
        for(int j = 0; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }
        if(count > n/3)
        {
            ans.push_back(arr[i]);
        }
    }

    return ans;
   
}

int main()
{
    vector<int> arr ={ 7,7,7,3,4,4,4,5};
    vector<int>maj;
    maj = find_majority(arr); 
    set<int> rang(maj.begin(),maj.end());
    cout<<"Majority element are :";
    for(auto i : rang)
    {
        cout<< i << " ";
    }

    return 0;
}