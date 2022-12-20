#include <iostream>
using namespace std;

void Intersection(int ar1[], int n1, int ar2[], int n2, int ar3[], int n3)
{
    int i = 0, j = 0, k = 0;
    int count = 0;

    cout << "Common elements in the stored array is:\n";
    while (i < n1 && j < n2 && k < n3)
    {
        if (ar1[i] == ar2[j] && ar2[j] == ar3[k])
        {
            cout << ar1[i] << " ";
            count++;
            i++;
            j++;
            k++;
        }

        else if (ar1[i] < ar2[j])
        {
            i++;
        }

        else if (ar2[j] < ar3[k])
        {
            j++;
        }

        else
        {
            k++;
        }
    }
    cout <<"\nCommon elements = " << count;
}

int main(void)
{
    int arr1[] = {1, 3, 4, 7, 9, 10, 21, 25, 35, 42, 47};
    int arr2[] = {5, 8, 9, 21, 35, 38, 40, 42, 47, 56};
    int arr3[] = {3, 8, 9, 21, 35, 42, 47, 57, 78};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int n3 = sizeof(arr3) / sizeof(arr3[0]);

    Intersection(arr1, n1, arr2, n2, arr3, n3);
    return 0;
}