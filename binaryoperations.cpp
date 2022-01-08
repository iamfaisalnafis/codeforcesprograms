#include <iostream>
#include <cmath>

int main()
{
    long long bin = 0, bin1, bin2, dec = 0, dec2 = 0, i = 0, j = 0, rem, rem2, rem3, add, k =1;
    std::cout << "Enter the first binary number: ";
    std::cin >> bin1;

    std::cout << std::endl;

    std::cout << "Enetr the second binary number: ";
    std::cin >> bin2;

    int temp1= bin1;
    int temp2 = bin2;

    while (bin1 != 0)
    {
        rem = bin1 % 10;
        bin1 = bin1 / 10;
        dec = dec + rem * pow(2, i);
        i++;
    }
    while (bin2 != 0)
    {
        rem2 = bin2 % 10;
        bin2 = bin2 / 10;
        dec2 = dec2 + rem2 * pow(2, j);
        j++;
    }
    int result = dec + dec2;

    while(result != 0)
    {
        rem3 = result % 2;
        result = result / 2;
        bin = bin + (rem3 * k);
        k = k * 10;
    }
    std::cout << std::endl;
    std::cout << temp1 << " + " << temp2 << " = " << bin;
    return 0;
}