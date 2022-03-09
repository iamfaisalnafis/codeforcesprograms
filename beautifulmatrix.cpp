<<<<<<< HEAD
#include <iostream>
#include <cmath>

int main()
{
    int x = 0;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            std::cin >> x;
            if(x == 1)
            {
                std::cout << abs(i-3) + abs(j-3) << std::endl;
            }
        }
    }
    return 0;
=======
#include <iostream>
#include <cmath>

int main()
{
    int x = 0;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            std::cin >> x;
            if(x == 1)
            {
                std::cout << abs(i-3) + abs(j-3) << std::endl;
            }
        }
    }
    return 0;
>>>>>>> b9f7f5e043190485111f18651093313dd6b4ade8
}