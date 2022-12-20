#include <iostream>
using namespace std;

int StrLength(string str)
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

string StrCopy(string str)
{
    string cpyStr;
    for (int i = 0; str[i] != '\0'; i++)
    {
        cpyStr = cpyStr + str[i];
    }
    return cpyStr;
}

string StrReverse(string str)
{
    for (int i = 0, j = StrLength(str) - 1; i < j; i++, j--)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    return str;
}

string StrConcat(char str[], char cstr[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    for (int j = 0; cstr[j] != '\0'; j++)
    {
        str[i] = cstr[j];
        i++;
    }
    str[i] = '\0';
    return str;
}

int main(void)
{
    char str[40] = "Data Structures and Algorithm";
    char str2[15]  = " is easy";
    cout << "Length: " << StrLength(str) << endl;
    cout << "Copied String: " << StrCopy(str) << endl;
    cout << "Reversed String: " << StrReverse(str) << endl;
    cout << "Concated String: " << StrConcat(str ,str2);
    return 0;
}