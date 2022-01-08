#include <iostream>
#include <cmath>

int main()
{
    float l, n, area;
    std::cout << "Enter the length of the side L: ";
    std::cin >> l;
    std::cout << std::endl;
    std::cout << "Enter the number of sides n: ";
    std::cin >> n;
    std::cout << std::endl;

    area = (n * (l * l))/(tan(M_PI/n) * 4);

    std::cout << "The area of the given polygon is: " << area << std::endl;

    return 0;
}