#include <iostream>
using namespace std;

void bubblesortImplementation (int arr[], int n)
{
    int flag(0);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1;
            }
        }
    }
    if (flag == 0)
    {
        cout << "Already Sorted..!";
        return;
    }
}

int main()
{
    int arr[] = { 45, 78, 89, 41, 52, 3, 5, 4, 65, 25, 36, 17, 28, 81, 93 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Elements before Bubble Sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    bubblesortImplementation (arr, n);
    cout << "\n";
    cout << "Elements after Bubble Sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
