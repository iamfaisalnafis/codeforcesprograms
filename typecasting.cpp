#include <iostream>

int main()
{
    float num1, num2, sum;

    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << std::endl;
    std::cout << "Enter the second number: ";
    std::cin >> num2;
    std::cout << std::endl;

    sum = num1 + num2;

    std::cout << "The sum is: " << sum << std::endl;

    std::cout << "The sum (after typecasting to int) is: " << (int)sum;
    std::cout << std::endl;

    std::cout << (char)num1 << " is the num1 value in Char";
    std::cout << std::endl;
    std::cout << (char)num2 << " is the num2 value in Char";
    std::cout << std::endl;
    
    
    std::cout << "The sum (after typecasting to char) is: " << (char)sum;

    return 0;
}