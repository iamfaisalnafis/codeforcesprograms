#include <iostream>

using namespace std;

int main()
{
    int arr[] = { 1, 2, 2, 2, 3, 4, 5, 6, 6, 6, 6, 7, 8, 9, 9, 9, 9, 10, 11, 11, 12 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int high(12);
    int hash_map[high] = { 0 };
    for (int i = 0; i < n; i++)
    {
        hash_map[arr[i]]++;
    }

    for (int i = 1; i < high; i++)
    {
        if (hash_map[i] > 1)
        {
            cout << "Duplicate found: " << i << "\n";
            cout << "Count: " << hash_map[i] << "\n";
        }
    }
    return 0;
}
