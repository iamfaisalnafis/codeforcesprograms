#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int arr[] = { 3, 7, 4, 9, 12, 6, 1, 11, 2, 10 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int low = 1, high = 12; 
    int hash_table[high] = { 0 };
    for (int i = 0; i < n; i++)
    {
        hash_table[arr[i]]++;
    }
    for (int i = low; i <= high; i++)
    {
        if(hash_table[i] == 0)
        {
            cout << "Missing Element is: " << i << "\n";
        }
    }
    cout << "Time Complexity - O(n)" << "\n";
    return 0;
}
