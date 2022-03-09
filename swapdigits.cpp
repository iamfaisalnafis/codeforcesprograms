<<<<<<< HEAD
#include <iostream>
#include <cmath>

int main()
{
    int firstDigit, lastDigit, digit, number, remainder, a, b, sum, reverseNumber;
    
    std::cout << "Enter the number to reverse it's first and last digit: ";
    std::cin >> number;

    digit = (int)log10(number);

    std::cout << digit << std::endl;

    firstDigit = number / pow(10, digit);
    lastDigit = number % 10;

    a = firstDigit * (pow(10, digit));
    b = number % a;
    number = b / 10;

    reverseNumber = lastDigit * (pow(10, digit)) + (number * 10 + firstDigit);
    std::cout << "The number after swapping First and Last digit is: " << reverseNumber << std::endl;
    return 0;
=======
#include <iostream>
#include <cmath>

int main()
{
    int firstDigit, lastDigit, digit, number, remainder, a, b, sum, reverseNumber;
    
    std::cout << "Enter the number to reverse it's first and last digit: ";
    std::cin >> number;

    digit = (int)log10(number);

    std::cout << digit << std::endl;

    firstDigit = number / pow(10, digit);
    lastDigit = number % 10;

    a = firstDigit * (pow(10, digit));
    b = number % a;
    number = b / 10;

    reverseNumber = lastDigit * (pow(10, digit)) + (number * 10 + firstDigit);
    std::cout << "The number after swapping First and Last digit is: " << reverseNumber << std::endl;
    return 0;
>>>>>>> b9f7f5e043190485111f18651093313dd6b4ade8
}