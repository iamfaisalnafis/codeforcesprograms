#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int n; 
    float b;
    cin >> n >> b;
    if (fmod(n, 5) == 0 && b > n)
    {
        cout << fixed << setprecision(2) << (b - n) - 0.50;
    }
    else if (fmod(n, 5) == 0 && b < n)
    {
        cout << fixed << setprecision(2) << b;
    }
    else
    {
        cout << fixed << setprecision(2) << b;
    }
    return 0;
}