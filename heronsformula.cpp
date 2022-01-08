#include <iostream>
#include <cmath>

int main()
{
    float s, side1, side2, side3, heron;

    std::cout << "Enter the first side of the triangle: ";
    std::cin >> side1;
    std::cout << std::endl;
    std::cout << "Enter the second side of the traingle: ";
    std::cin >> side2;
    std::cout << std::endl;
    std::cout << "Enter the third side of the traingle: ";
    std::cin >> side3;
    std::cout << std::endl;

    s = (side1 + side2 + side3) / 2;

    heron = sqrt(s * (s - side1) * (s - side2) * (s - side3));

    std::cout << "The area of the triangle using Heron's Formula is: " << heron << std::endl;

    return 0;
}
