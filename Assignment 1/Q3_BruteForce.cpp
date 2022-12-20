#include <iostream>
#include <string.h>
using namespace std;

bool SearchPattern(string str, string pattern)
{
    int n = str.size();
    int m = pattern.size();

    for (int i = 0; i <= (n - m); i++)
    {
        int count = 0;
        for (int j = 0; j < m; j++)
        {
            if (pattern[j] == str[j + i])
            {
                count++;
            }
        }
        if (count == m)
            return true;
    }
    return false;
}

int main(void)
{
    string str = "abaabbcdaab";
    string pattern = "aab";

    if (SearchPattern(
            str, pattern))
    {
        cout << "Pattern found in the String";
    }
    else{
        cout << "Pattern NOT found";
    }
    return 0;
}