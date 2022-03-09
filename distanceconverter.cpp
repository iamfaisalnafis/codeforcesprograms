<<<<<<< HEAD
#include <iostream>

int main()
{
    char choice;
    float mile, kilometer, m2k, k2m;
    
    std::cout << "########## Welcome to Distance Converter ##########";
    std::cout << std::endl;
    std::cout << "1. Kilometeres to Miles.";
    std::cout << std::endl;
    std::cout << "2. Miles to Kilometeres.";
    std::cout << std::endl;
    std::cout << "Please input your choice: ";
    
    std::cin >> choice;

    std::cout << std::endl;

switch (choice)
{
case '1':
    std::cout << "Please input values in Kilometers: ";
    std::cin >> kilometer;
    k2m = kilometer * 0.62137;
    std::cout << kilometer << " in Miles is: " << k2m;
    std::cout << std::endl;
    break;
case '2':
    std::cout << "Please input values in Miles: ";
    std::cin >> mile;
    m2k = mile / 0.62137;
    std::cout << mile << " in Kilometers is: " << m2k;
    std::cout << std::endl;
    break;

default:

    std::cout << "Invalid Choice! Please rerun the program and try again..";
    break;
}
=======
#include <iostream>

int main()
{
    char choice;
    float mile, kilometer, m2k, k2m;
    
    std::cout << "########## Welcome to Distance Converter ##########";
    std::cout << std::endl;
    std::cout << "1. Kilometeres to Miles.";
    std::cout << std::endl;
    std::cout << "2. Miles to Kilometeres.";
    std::cout << std::endl;
    std::cout << "Please input your choice: ";
    
    std::cin >> choice;

    std::cout << std::endl;

switch (choice)
{
case '1':
    std::cout << "Please input values in Kilometers: ";
    std::cin >> kilometer;
    k2m = kilometer * 0.62137;
    std::cout << kilometer << " in Miles is: " << k2m;
    std::cout << std::endl;
    break;
case '2':
    std::cout << "Please input values in Miles: ";
    std::cin >> mile;
    m2k = mile / 0.62137;
    std::cout << mile << " in Kilometers is: " << m2k;
    std::cout << std::endl;
    break;

default:

    std::cout << "Invalid Choice! Please rerun the program and try again..";
    break;
}
>>>>>>> b9f7f5e043190485111f18651093313dd6b4ade8
}