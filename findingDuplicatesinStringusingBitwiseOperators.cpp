#include <iostream>

using namespace std;

int main()
{
    char arr[] = "samsung";
    int n = sizeof(arr) / sizeof(arr[0]);
    int h = 0, x = 0;

    for (int i = 0; i < n; i++)
    {
        x = 1;
        x = x << arr[i] - 97;
        if (x & h > 0)
        {
            cout << "Duplicate Found: " << arr[i] << "\n";
        }
        else
        {
            h = x | h;
        }
    }
    return 0;
}
