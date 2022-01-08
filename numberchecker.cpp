#include <iostream>

int main()
{
    int64_t digit;
    std::cout << "Enter a number to check if it is Positive, Negetive or Zero: ";
    std::cin >> digit;

    if (digit > 0)
    {
        std::cout << "The Number is Postive" << std::endl; 
    }
    else if (digit < 0)
    {
        std::cout << "The Number is Negative" << std::endl;
    }
    else
    {
        std::cout << "The Number is ZERO";
    }
    return 0;
}