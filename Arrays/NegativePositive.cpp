#include <iostream>
using namespace std;

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

void NegativePositive(int A[], int n)
{
    for (int i = 0, j = n - 1; i < j;)
    {
        while (A[i] < 0)
            i++;

        while (A[j] > 0)
            j--;

        if (i < j)
        {
            swap(A[i], A[j]);
            i++;
            j--;
        }
    }

    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
}

int main(void)
{
    int A[] = {1, -2, 4, -3, 11, 10, -5, 8};
    int size = sizeof(A) / sizeof(A[0]);
    NegativePositive(A, size);
    return 0;
}