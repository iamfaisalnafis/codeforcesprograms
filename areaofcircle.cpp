#include <iostream>

int main()
{
    float radius, area, circumference;
    std::cout << "Enter the radius of the circle to find it's area & circumference: ";
    std::cin >> radius;

    std::cout << std::endl;

    area = 3.1428 * radius * radius;
    circumference = 2 * 3.1428 * radius;

    std::cout << "The area of the traingle is: " << area << " & the circumference is: " << circumference << std::endl;
    return 0;
}