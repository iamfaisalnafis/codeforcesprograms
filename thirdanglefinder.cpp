#include <iostream>

int main()
{
    int firstangle, secondangle, thirdangle;

    std::cout << "Enter the first angle of the traingle: ";
    std::cin >> firstangle;

    std::cout << std::endl;

    std::cout << "Enter the second angle of the triangle: ";
    std::cin >> secondangle;

    std::cout << std::endl;

    thirdangle = 180 - (firstangle + secondangle);
    
    std::cout << "The third angle of the traingle after calculations is: " << thirdangle << std::endl;

    return 0;
}