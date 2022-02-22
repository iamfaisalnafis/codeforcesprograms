#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int returnmaxWater (vector<int>& arr)
{
    int maxwaterVolume(0);
    int i = 0;
    int j = arr.size() - 1;
    while (i < j)
    {
        int side = min(arr[i], arr[j]);
        maxwaterVolume = max(maxwaterVolume, (j - i) * side);
        if (arr[i] < arr[j])
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return maxwaterVolume;
}

int main()
{
    vector<int> arr = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    returnmaxWater(arr);
    
    return 0;
}
