#include <iostream>
using namespace std;

int main()
{
    int a[] = { 4, 1, 7, 8, 2, 5, 46, 74, 14, 25, 36, 75, 95, 15, 23 };
    int n = sizeof(a) / sizeof(a[0]);
    int b[n];

    cout << "Before Reversing: ";
    
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    
    for (int i = n - 1, j = 0; i >= 0; i--, j++)
    {
        b[j] = a[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        a[i] = b[i];
    }

    cout << endl;

    cout << "After Reversing: ";

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}

