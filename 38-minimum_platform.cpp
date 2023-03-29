#include <bits/stdc++.h>
using namespace std;

int findPlatform(int arr[], int dep[], int n)

    {
    	// Your code here
    	sort(arr,arr+n);
    	sort(dep,dep+n);
    	int count=1;
    	int i=1;
    	int j=0;
    	while(i<n){
    	    if(arr[i]<=dep[j]){
    	        count++;
            }
    	    else{
    	        j++;
            }
    	        i++;
    	}
    	return count;
    }

int main()
{
    int arri[] = {900, 940, 950, 1100, 1500, 1800};
    int dep[] = {910, 1200, 1120, 1130, 1900, 2000};
  
    int n = sizeof(arri) / sizeof(arri[0]);

    int ans = findPlatform(arri, dep, n);
    cout<<"Answer is "<<ans;
}