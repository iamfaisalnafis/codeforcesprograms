<<<<<<< HEAD
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
=======
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
>>>>>>> b9f7f5e043190485111f18651093313dd6b4ade8
}