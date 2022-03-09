#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n == 1 || n >= 9 && n <= 11 || n >= 13 && n <=29 || n == 31 || n == 37 || n == 39 || n == 41 || n == 47 || n == 49 || n == 51 || n == 57 || n == 59 || n == 61 || n == 67 || n >= 69 && n <= 79 || n == 81 || n == 87 || n >= 89 && n <= 100)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
    return 0;
}
