//Given an integer array nums, return the number of reverse pairs in the array.
#include <bits/stdc++.h>
using namespace std;

int ReversePair(vector<int> &nums)
{
    int a = 0;

    for (int i = 0; i < nums.size(); i++){
        for (int j = i+1; j < nums.size(); j++)
        {
            if (nums[i] > 2 * nums[j])
            {
                a++;
            }
        }
    }

    return a;
}
int main()
{
    vector<int>nums = {1,3,2,3,1};
    cout << "Number of reverse pairs :" << ReversePair(nums);
}
