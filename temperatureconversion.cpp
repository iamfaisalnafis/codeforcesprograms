#include <iostream>

int main()
{
    float f, c, k, f2c, c2f, c2k, k2c, f2k, k2f;
    char choice;
    std::cout << "Welcome to temperature conversion: Please choose the options accordingly ";
    std::cout << std::endl;
    std::cout << "1. Fahrenheit to Celcius.";
    std::cout << std::endl;
    std::cout << "2. Celcius to Fahrenheit.";
    std::cout << std::endl;
    std::cout << "3. Fahrenheit to Kelvin";
    std::cout << std::endl;
    std::cout << "4. Kelvin to Fahrenheit.";
    std::cout << std::endl;
    std::cout << "5. Celcius to Kelvin";
    std::cout << std::endl;
    std::cout << "6. Kelvin to Celcius.";
    std::cout << std::endl;
    std::cout << "Please enter a choice: ";
    std::cin >> choice;

    switch (choice)
    {
    case '1':
        std::cout << "Enter the tempereature in Fahrenheit: ";
        std::cin >> f;
        f2c = 0.56 * (f - 32);
        std::cout << f << " in Celcius is: " << f2c;
        break;
    case '2':
        std::cout << "Enter the tempereature in Celcius: ";
        std::cin >> c;
        c2f = 1.8 * c + 32;
        std::cout << c << " in Fahrenheit is: " << c2f;
        break;
    case '3':
        std::cout << "Enter the tempereature in Fahrenheit: ";
        std::cin >> f;
        f2k = 0.56 * (f - 32) + 273;
        std::cout << f << " in Kelvin is: " << f2k;
        break;
    case '4':
        std::cout << "Enter the tempereature in Kelvin: ";
        std::cin >> k;
        k2f = 1.8 * (k - 273) + 32;
        std::cout << f << " in Fahrenheit is: " << k2f;
        break;
    case '5':
        std::cout << "Enter the tempereature in Celcius: ";
        std::cin >> c;
        c2k = c + 273;
        std::cout << c << " in Fahrenheit is: " << c2k;
        break;
    case '6':
        std::cout << "Enter the tempereature in Kelvin: ";
        std::cin >> k;
        k2c = k - 273;
        std::cout << k << " in Celcius is: " << k2c;
        break;
    
    default:
        std::cout << "Invalid Choice! Re run the program again..";
        break;
    }
    return 0;
}