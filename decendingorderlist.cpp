#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> nums;
    int n;
    while(std::cin >> n)
    {
        nums.push_back(n);
    }
    std::sort(nums.rbegin(), nums.rend());

    for (int i = 0; i != 3; ++i)
    {
        std::cout << nums[i] << std::endl;
    }
    return 0;
}