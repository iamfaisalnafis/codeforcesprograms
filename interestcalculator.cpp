<<<<<<< HEAD
#include <iostream>
#include <cmath>

int main()
{
    long double si, ci, p, r, t, amount;
    char choice;
    std::cout << "########## Welcome to Interest Calcultor ##########";
    std::cout << std::endl;
    std::cout << "1. Simple Interest";
    std::cout << std::endl;
    std::cout << "2. Compound Interest";
    std::cout << std::endl;

    std::cout << "Please input your choice: ";
    std::cin >> choice;

    switch (choice)
    {
    case '1':
        std::cout << "Simple Interest Calculator" << std::endl;
        std::cout << "Enter the Principal Amount: ";
        std::cin >> p;
        std::cout << "Enter the Rate of Interest: ";
        std::cin >> r;
        std::cout << "Enter the Time duration: ";
        std::cin >> t;
        si = (p * r * t)/100;
        std::cout << "The Simple Interest is: " << si << std::endl;
        break;
    case '2':
        std::cout << "Compound Interest Calculator" << std::endl;
        std::cout << "Enter the Principal Amount: ";
        std::cin >> p;
        std::cout << "Enter the Rate of Interest: ";
        std::cin >> r;
        std::cout << "Enter the Time duration: ";
        std::cin >> t;
        amount = p * (pow(1 + r / 100, t));
        ci = amount - p;
        std::cout << "The Compound Interest is: " << ci << std::endl;
        break;
    default:
        std::cout << "Invalid Input! Please try again..";
        break;
    }
}
=======
#include <iostream>
#include <cmath>

int main()
{
    long double si, ci, p, r, t, amount;
    char choice;
    std::cout << "########## Welcome to Interest Calcultor ##########";
    std::cout << std::endl;
    std::cout << "1. Simple Interest";
    std::cout << std::endl;
    std::cout << "2. Compound Interest";
    std::cout << std::endl;

    std::cout << "Please input your choice: ";
    std::cin >> choice;

    switch (choice)
    {
    case '1':
        std::cout << "Simple Interest Calculator" << std::endl;
        std::cout << "Enter the Principal Amount: ";
        std::cin >> p;
        std::cout << "Enter the Rate of Interest: ";
        std::cin >> r;
        std::cout << "Enter the Time duration: ";
        std::cin >> t;
        si = (p * r * t)/100;
        std::cout << "The Simple Interest is: " << si << std::endl;
        break;
    case '2':
        std::cout << "Compound Interest Calculator" << std::endl;
        std::cout << "Enter the Principal Amount: ";
        std::cin >> p;
        std::cout << "Enter the Rate of Interest: ";
        std::cin >> r;
        std::cout << "Enter the Time duration: ";
        std::cin >> t;
        amount = p * (pow(1 + r / 100, t));
        ci = amount - p;
        std::cout << "The Compound Interest is: " << ci << std::endl;
        break;
    default:
        std::cout << "Invalid Input! Please try again..";
        break;
    }
}
>>>>>>> b9f7f5e043190485111f18651093313dd6b4ade8
