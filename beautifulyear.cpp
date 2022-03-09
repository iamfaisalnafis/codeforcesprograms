#include <iostream>

using namespace std;

int main()
{
    int y;
    cin >> y;
    while (true)
    {
        y += 1;
        int a = y / 1000; // first digit
        int b = y / 100 % 10; // second digit
        int c = y / 10 % 10; // third digit
        int d = y % 10; // fourth digit
        if(a != b && a != c && a != d && b != c && b != d && c != d)
        {
            break;
        }
    }
    cout << y << endl;
    return 0;
}