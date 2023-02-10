#include<iostream>
using namespace std;

int main()
{
    int arr[20][20];
    int i,j,n;
    cout<<"Enter the number of lines :\n";
    cin>>n;
    for(i = 0; i < n; i++)
    {
        for ( j = 0; j < n-1-i; j++)
        {
            cout<<" ";
        }

        for ( j = 0; j <= i; j++)
        {
            if(j == 0 || j == i)
            {
                arr[i][j] = 1;
            }
            else{
                arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
            }
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
    return 0;
}