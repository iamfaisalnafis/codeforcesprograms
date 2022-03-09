#include <iostream>
#include <string.h>

using namespace std;

void searchpatterninaString(string text, string pattern)
{
    int txtlen = text.length();
    int patlen = pattern.length();
    int i, j;
    for (i = 0; i <= txtlen - patlen; i++)
    {
        for (j = 0; j < patlen; j++)
        {
            if (text[i + j] != pattern[j])
            {
                break;
            }
        }
        if ( j == patlen)
        {
            cout << "Pattern found at Index: " << i << endl;
        }
    }
}

int main()
{
    string text;
    string pattern;
    cout << "Enter the text: ";
    getline(cin, text);
    cout << endl;
    cout << "Enter the pattern: ";
    getline(cin, pattern);
    searchpatterninaString(text, pattern);
    return 0;
}

