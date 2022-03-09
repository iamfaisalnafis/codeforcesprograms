<<<<<<< HEAD
#include <iostream>

int main()
{
    int n, k;
    std::cin >> n >> k;
    int a;
    for(int i = 0; i < k; i++)
    {
        std::cin >> a;
        if(a == 0)
        {
            std::cout << i << std::endl;
            return 0;
        }
    }
    int b;
    for(int i = k; i < n; i++)
    {
        std::cin >> b;
        if(b != a)
        {
            std::cout << i << std::endl;
            return 0;
        }
    }
    std::cout << n << std::endl;
    return 0;   
=======
#include <iostream>

int main()
{
    int n, k;
    std::cin >> n >> k;
    int a;
    for(int i = 0; i < k; i++)
    {
        std::cin >> a;
        if(a == 0)
        {
            std::cout << i << std::endl;
            return 0;
        }
    }
    int b;
    for(int i = k; i < n; i++)
    {
        std::cin >> b;
        if(b != a)
        {
            std::cout << i << std::endl;
            return 0;
        }
    }
    std::cout << n << std::endl;
    return 0;   
>>>>>>> b9f7f5e043190485111f18651093313dd6b4ade8
}