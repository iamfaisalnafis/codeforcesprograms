#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int arr[] = { 3, 7, 4, 8, 9, 12, 6, 1, 7, 11, 2, 10, 8, 14, 16, 4, 3, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> temp;
    for (int i = 0; i < n; i++)
    {
        int flag = 1;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            temp.push_back(arr[i]);
        }
    }
    n = temp.size();
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }

    cout << "Array without Duplicates: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
