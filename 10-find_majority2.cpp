//Given an array nums of size n, return the majority element.

//The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.
#include<iostream>
#include<vector>
using namespace std;
int majority_ele(vector<int> &arr)
{
    int count = 0, majority = 0; 
    for (size_t i = 0; i < arr.size(); i++)
    {
        if(count)
        {
            count = count +(arr[i] == majority ? 1 : -1);
        }
        else{

            majority = arr[i];
            count = 1;
        }
    }
    return majority;
}

int main()
{
    vector<int> arr = {2,2,1,1,1,2,2};
    cout<<"Majority element is : "<<majority_ele(arr);

    return 0;

}