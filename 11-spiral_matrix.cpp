// /*write a program to print spiral matrix .
// 1 2 3
// 8 9 4
// 7 6 5*/

#include <iostream>
using namespace std;
#define n 3
#define m 3

void SpiralMatrix(int mat[n][m], int rows, int col)
{
    int top = 0, left = 0, right = col - 1, bottom = rows - 1, dir = 1;
    while (right >= left && bottom >= top)
    {
        if (dir == 1)
        {
            for (int i = left; i <= right; i++)
            {
                cout << mat[top][i] << " ";
            }
            top++;
            dir = 2;
        }
        else if (dir == 2)
        {
            for (int i = top; i <= bottom; i++)
            {
                cout << mat[i][right] << " ";
            }
            right--;
            dir = 3;
        }

        else if (dir == 3)
        {
            for (int i = right; i >= left; i--)
            {
                cout << mat[bottom][i] << " ";
            }
            bottom--;
            dir = 4;
        }

        else if (dir == 4)
        {
            for (int i = bottom; i >= top; i--)
            {
                cout << mat[i][left] << " ";
            }
            left++;
            dir = 1;
        }
    }
}
int main()
{
    int mat[n][m] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << "The matix is : \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    cout << "The spiral matrix is :\n";
    SpiralMatrix(mat, n, m);

    return 0;
}
