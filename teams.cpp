#include <iostream>

int main()
{
    int n, Petya, Vasya, Tonya, number(0);
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> Petya >> Vasya >> Tonya;
        if(Petya + Vasya + Tonya >= 2)
        {
            number = number + 1;
        }
    }
    std::cout << number << std::endl;
    return 0;
}