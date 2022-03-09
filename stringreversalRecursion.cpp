#include <iostream>

using namespace std;

void stringrevRecursion (string str)
{
    if (str.length() == 0)
    {
        return;
    }
    stringrevRecursion(str.substr(1));
    cout << str[0];
}

int main()
{
    string str;
    cin >> str;
    stringrevRecursion(str);
    return 0;
}
