#include <iostream>

int main()
{
    float a, b, c, d, total, average;

    std::cout << "Enter the value of A: ";
    std::cin >> a;
    std::cout << std::endl;
    std::cout << "Enter the value of B: ";
    std::cin >> b;
    std::cout << std::endl;
    std::cout << "Enter the value of C: ";
    std::cin >> c;
    std::cout << std::endl;
    std::cout << "Enter the value of D: ";
    std::cin >> d;
    std::cout << std::endl;

    total = a + b + c + d;
    average = (a + b + c + d)/4;

    std::cout << "The total of the entered numbers is: " << total << " & the average is: " << average << std::endl;
    return 0;
    
}