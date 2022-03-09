<<<<<<< HEAD
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
=======
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
>>>>>>> b9f7f5e043190485111f18651093313dd6b4ade8
}