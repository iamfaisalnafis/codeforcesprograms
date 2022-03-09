#include <iostream>
using namespace std;

void rotateFunction(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int arr[] = {4, 1, 7, 8, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 3;

    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    for (int i = 0, j = d - 1; i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    for (int i = d, j = n - 1; i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    
    cout << "Rotated Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
