   #include<bits/stdc++.h>
   using namespace std;
    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int,int>> v;
        for(int i = 0;i<n;i++)
        {
            v.push_back(make_pair(end[i],start[i]));
        }
        sort(v.begin(),v.end());
        int ans = 1;
        int i = 1;
        int prev = v[0].first;
        while(i<n)
        {
            if(v[i].second>prev)
            {
                ans++;
                prev = v[i].first;
            }
            i++;
        }
        return ans;
    }
    int main()
    {
        int start[] = {1,3,0,5,8,5};
        int end[] =  {2,4,6,7,9,9};
        int n = sizeof(start)/sizeof(start[0]);
        int a= maxMeetings(start,end,n);
        cout<<"Ans is "<<a;
    }