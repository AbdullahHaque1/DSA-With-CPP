#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {30, 20, 150, 100, 40};
    int a = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if ((arr[i] + arr[j]) % 60 == 0)
            {
                a++;
            }
        }
    }
    cout <<" Pair of Songs with total number of division by 60 : "<< a;
}