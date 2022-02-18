#include <iostream>

using namespace std;

int main()
{
    int arr[] = { 4, 1, 7, 8, 2, 5, 46, 74, 14, 25, 36, 75, 95, 15, 23 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int max, min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "Maximun Element is: " << max << "\n";
    cout << "Minimum Element is: " << min << "\n";
    return 0;
}
