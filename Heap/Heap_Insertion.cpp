#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void Insert(int A[], int n, int value)
{
    n = n + 1;
    int i = n;
    A[i] = value;
    while (i >= 1)
    {
        int p = i / 2;
        if (A[p] < A[i])
        {
            swap(&A[p], &A[i]);
            i = p;
        }
        else
            return;
    }
}

int main(void)
{
    int A[20] = {0, 70, 60, 40, 45, 50, 39, 16, 10, 9, 35};

    Insert(A, 11, 34);
    for (int i = 1; i < 11; i++)
        cout << A[i] << " ";

    return 0;
}