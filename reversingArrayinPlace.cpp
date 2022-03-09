#include <iostream>
using namespace std;

int main()
{
    int arr[] = { 4, 1, 7, 8, 2, 5, 46, 74, 14, 25, 36, 75, 95, 15, 23 };
    
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
