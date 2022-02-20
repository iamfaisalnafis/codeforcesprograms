#include <iostream>
using namespace std;

void swap (int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition (int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivot = partition(arr, low, high);
        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}

void displayArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = { 45, 78, 89, 41, 52, 3, 5, 4, 65, 25, 36, 17, 28, 81, 93 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int low(0), high(n - 1);
    cout << "Before QuickSort: ";
    displayArray (arr, n);
    
    quickSort (arr, low, high);
    cout << "\n";
    cout << "After QuickSorting: ";
    displayArray (arr, n);
    return 0;
}
