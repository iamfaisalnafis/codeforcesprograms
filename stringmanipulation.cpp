#include <iostream>
#include <string>

int main()
{
    std::string fullName;
    std::cout << "Tell us about yourself: ";
    std::getline (std::cin, fullName);
    std::cout << "So what you said is: " << fullName << std::endl;
    int len = fullName.size();
    std::cout << len;
    return 0;
}