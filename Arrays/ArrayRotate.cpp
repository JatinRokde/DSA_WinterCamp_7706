#include <iostream>
using namespace std;

void rotate(int A[], int size)
{
    int k = 3;
    while (k--)
    {
        int temp = A[size - 1];
        for (int i = size - 1; i >= 1; i--)
        {
            A[i] = A[i - 1];
        }
        A[0] = temp;
    }

    for (int i = 0; i < size; i++)
        cout << A[i] << " ";
}

int main(void)
{
    int A[] = {2, 4, 7, 9, 11};
    int size = sizeof(A) / sizeof(A[0]);
    rotate(A, size);

    return 0;
}