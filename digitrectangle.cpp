#include <iostream>

int main()
{
    float length, breath;

    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;

    std::cout << "Enter the breath of the rectangle: ";
    std::cin >> breath;

    for (int i = 1; i <= length; i++)
    {
        for (int j = 1; j <= breath; j++)
        {
            if (i == 1 || j == 1 || i == length || j == breath)
            {
                std::cout << length << " ";
            }
            else
            {
                std::cout << "   ";
            }
        }
        std::cout << std::endl;
    }
    return 0;
}