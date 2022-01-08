#include <iostream>

int main()
{
    float height, breath, area;
    std::cout << "Please enetr the value of Height H: ";
    std::cin >> height;
    std::cout << std::endl;

    std::cout << "Enter the value of Breath B: ";
    std::cin >> breath;
    std::cout << std::endl;

    area = 0.5 * height * breath;

    std::cout << "The area of the triangle is: " << area << std::endl;
    return 0;
    
}