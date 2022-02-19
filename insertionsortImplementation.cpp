#include <iostream>
using namespace std;

void insertionsortImplementation (int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        int x = arr[i];
        while (j > -1 && arr[j] > x)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = x;
    }
}

int main()
{
    int arr[] = { 45, 78, 89, 41, 52, 3, 5, 4, 65, 25, 36, 17, 28, 81, 93 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Elements before Insertion Sort: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    insertionsortImplementation (arr, n);
    
    cout << endl;
    cout << "Elements after Insertion Sort: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
