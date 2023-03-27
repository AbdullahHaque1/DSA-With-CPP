#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threesum(vector<int> nums)
{
    int n = nums.size();
    vector<vector<int>> ans;
    set<vector<int>> v1;

    for (int i = 0; i < n-2; i++)
    {
        for (int j = i+1; j < n-1; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                if (nums[i] + nums[j] + nums[k] == 0 && i!=j && j!=k && k!=i)
                {
                    v1.insert({nums[i],nums[j],nums[k]});
                }
            }
        }
    }
    for(auto it : v1)
    {
        ans.push_back(it);
    }
    return ans;
}

int main()
{
    vector<int> arr = {-1,0,1,2,-1,-4};
    vector<vector<int>> ans;
    ans = threesum(arr);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<"[";
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<"]"<<"\n";

    }

    return 0;
}

//***********Optimized Solution*******//

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threesum(vector<int> nums)
{
    int n = nums.size();
    sort(nums.begin(),nums.end());
    vector<vector<int>> ans;
    set<vector<int>> v1;

    for (int i = 0; i < n - 2; i++)
    {
        int j = i + 1;
        int k = n - 1;
        for (; j < k;)
        {
            int sum = nums[i] + nums[j] + nums[k];
            if (nums[i] + nums[j] + nums[k] > 0)
            {
                k--;
            }
            else if (nums[i] + nums[j] + nums[k] < 0)
            {
                j++;
            }
            else
            {
                v1.insert({nums[i], nums[j], nums[k]});
                j++;
                k--;
            }
        }
    }
    for (auto it : v1)
    {
        ans.push_back(it);
    }
    return ans;
}

int main()
{
    vector<int> arr = {-1,0,1,2,-1,-4};
    vector<vector<int>> ans;
    ans = threesum(arr);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << "[";
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << "]" << "\n" ;
    }

    return 0;
}
