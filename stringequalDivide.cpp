#include <iostream>

using namespace std;

void stringequalDivide (string str, int n)
{
    int len = str.length();
    if (len == 0 || len % n != 0)
    {
        cout << "Not Possible.";
        return;
    }
    int parts = len / n;
    int start(0);

    while (start < len)
    {
        cout << str.substr(start, parts) << endl;
        start += parts;
    }
}

int main()
{
    string str;
    cout << "Enter a String: ";
    cin >> str;
    int n;
    cout << "Enter the number to divide the strings into: ";
    cin >> n;
    stringequalDivide (str, n);
    return 0;
}
