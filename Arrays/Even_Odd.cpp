#include <iostream>
using namespace std;

void countOddEven(int *A, int n)
{
    int oddCount = 0, evenCount = 0;

    for (int i = 0; i < n; i++)
    {
        if (*(A + i) % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }
    cout << "Even Elements: " << evenCount << endl;
    cout << "Odd Elements: " << oddCount;
}

int main(void)
{
    int A[] = {2, 1, 5, 7, 9, 11, 12, 20};
    int size = sizeof(A) / sizeof(A[0]);

    countOddEven(A, size);
    return 0;
}