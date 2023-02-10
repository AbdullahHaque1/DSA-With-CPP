#include <iostream>
using namespace std;

int ReverseArr(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

void PrintArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int m ;
    cout << "Enter the size of array : ";
    cin >> m;
    int arr[m];
    cout<<"Enter the array : ";
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }

    int n = sizeof(arr) / sizeof(arr[0]);
    ReverseArr(arr, n);
    cout<<"Reversed array is : ";
    PrintArr(arr, n);
    return 0;
}