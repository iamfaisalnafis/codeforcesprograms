#include <iostream>
using namespace std;

void selectionsortImplementation (int arr[], int n)
{
    int i, j, k;
    for (i = 0; i < n - 1; i++)
    {
        for (j = k = i; j < n; j++)
        {
            if (arr[j] < arr[k])
            {
                k = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[k];
        arr[k] = temp;

    }
}

int main()
{
    int arr[] = { 45, 78, 89, 41, 52, 3, 5, 4, 65, 25, 36, 17, 28, 81, 93 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Elements before Selection Sort: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    selectionsortImplementation (arr, n);
    
    cout << endl;
    cout << "Elements after Selection Sort: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
