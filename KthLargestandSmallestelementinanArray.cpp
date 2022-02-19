#include <iostream>
#include <set>

using namespace std;

int main()
{
    int arr[] = {4,6,7,1,2,3,9,8};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int k = 4;
    
    set<int> s(arr, arr + n);
    set<int>::iterator itr = s.begin();
    
    advance(itr, k - 1);
    
    cout << k << "th Largest Element is: "<< *itr << "\n";
    cout << "\n" << "Time Complexity - O(n)";
    return 0;
}
