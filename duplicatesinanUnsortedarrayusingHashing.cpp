#include <iostream>
using namespace std;

int main()
{
    int arr[] = { 3, 7, 4, 8, 9, 12, 6, 1, 7, 11, 2, 10, 8, 14, 16, 4, 3, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int low = 1, high = 16; 
    int hash_map[high] = { 0 };
    for (int i = 0; i < n; i++)
    {
        hash_map[arr[i]]++;
    }

    for (int i = 1; i <= high; i++)
    {
        if (hash_map[i] > 1)
        {
            cout << "Duplicates Found: " << i << "\n";
            cout << "Count: " << hash_map[i] << "\n";
        }
    }
    return 0;
}
