#include <iostream>
#include <string.h>
using namespace std;

void reverseString (char char_array[], int n)
{
    int i, j;
    for (i = 0, j = n - 1; i < j; i++, j--)
    {
        char temp = char_array[i];
        char_array[i] = char_array[j];
        char_array[j] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << char_array[i];
    }
}

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;
    int n = str.length();

    char char_array[n];
    strcpy (char_array, str.c_str());

    reverseString (char_array, n);

    return 0;
}
