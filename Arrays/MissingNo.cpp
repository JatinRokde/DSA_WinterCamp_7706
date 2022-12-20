#include <iostream>
using namespace std;

int main(void)
{
    int A[] = {11, 12, 13, 14, 15, 16, 18, 19, 20};
    int size = sizeof(A) / sizeof(A[0]);

    int diff = 1;
    for (int i= 0; i < size-1; i++)
    {
        if (A[i+1] - A[i] != diff)
        {
            cout << A[i] + diff << endl;
        }
    } 
    return 0;
}