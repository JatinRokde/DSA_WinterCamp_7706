#include <iostream>
using namespace std;

void rowSum(int A[][3], int m, int n)
{

    for (int i = 0; i < m; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum = sum + *(*(A + i) + j);
        }
        cout << "sum = " << sum << endl;
    }
}

void columnSum(int A[][3], int m, int n)
{
    for (int j = 0; j < n; j++)
    {
        int sum = 0;
        for (int i = 0; i < m; i++)
        {
            sum = sum + *(*(A + i) + j);
        }
        cout << "sum = " << sum << endl;
    }
}

int main(void)
{
    int A[3][3] = {{1, 2, 7}, {3, 4, 6}, {9, 5, 8}};
    rowSum(A, 3, 3);
    columnSum(A, 3, 3);

    return 0;
}