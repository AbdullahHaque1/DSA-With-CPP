/*write a program to print repeat and print missing number in an array
Input 3,1,2,5,3
Output repeat number : 3
Missing : 4  */
#include <bits/stdc++.h>
using namespace std;

vector<int> Array_Repeat_missing(vector<int> &arr)
{
    int i = 0;
    while(i < arr.size())
    {
        if (arr[i] == arr[arr[i] - 1])
        {
            i++;
        }
        else
        {
            swap(arr[i], arr[arr[i] - 1]);
        }
    }
    int missing = 0, repeat = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != i + 1)
        {
            repeat = arr[i];
            missing = i + 1;
            break;
        }
    }
    vector<int> ans;
    ans.push_back(repeat);
    ans.push_back(missing);

    return ans;
}
int main()
{
    vector<int> arr = {3,1,2,5,3};
    vector<int> res = Array_Repeat_missing(arr);
    cout << "Repeat and Missing element are : ";
    for (int i : res)
    {
        cout << i << " ";
    }

    return 0;
}