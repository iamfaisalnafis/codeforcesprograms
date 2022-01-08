#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::string sum, newsum;
    std::cin >> sum;

    for (int i =0;i<sum.size();i++)
    {
        if(sum[i] != '+')
        {
            newsum.push_back(sum[i]);
        }
    }
    std::sort(newsum.begin(), newsum.end());
    std::cout << newsum[0];
    for(int i = 1; i <newsum.length();i++){
        std::cout << "+"<<newsum[i];
    }
    return 0;
}