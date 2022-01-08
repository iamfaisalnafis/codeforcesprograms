#include <iostream>
#include <cmath>

int main()
{
    float area, side;
    std::cout << "Enter the length of the side: ";
    std::cin >> side;

    area = ((3 * sqrt(3)) / 2 ) * (side * side);

    std::cout << "The area of the Hexagon is: " << area << std::endl;

    return 0; 
}