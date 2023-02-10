// You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees.(clockwise)

#include <iostream>
using namespace std;

int main()
{
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int i,j,k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < i; j++)
        {
           swap(matrix[i][j],matrix[j][i]);
        }
    }
    //Reverse the matrix
    for (i = 0; i < 3; i++)
    {
        int start = 0,end = 3-1;
        while(start<end)
        {
            swap(matrix[i][start],matrix[i][end]);
            start++;
            end--;
        }
    }
    
    cout<<"The rotated matrix is :\n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

}

//Time Complexity = O(n^2).
//Space Complexity = O(1).