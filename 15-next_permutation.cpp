//premution of an array
#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec = {1,2,3};
    
    next_permutation(vec.begin(), vec.end());//using built in function of c++.
    for (int i = 0; i < vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
    return 0;
}