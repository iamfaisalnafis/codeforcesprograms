#include <iostream>
using namespace std;

int main()
{
    int arr[] = { 1, 2, 2, 3, 4, 5, 6, 6, 7, 8, 9, 10, 11, 11, 12 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int count(0);
    for (int i = 0; i < n; i++)
    {
        if (arr[i + 1] == arr[i])
        {
            count++;
            cout << "Duplicate Element Found: " << arr[i + 1] << " at Index: " << i + 1 <<"\n";
        }
    }
    cout << "The total number of Duplicate Elements found are: " << count << "\n";
    return 0;
}

