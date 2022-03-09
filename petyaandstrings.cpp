<<<<<<< HEAD
#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <cstring>

int main()
{
    std::string s1, s2;
    std::cin >> s1 >> s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    std::cout << strcmp(s1.c_str(), s2.c_str()) << std::endl;
    return 0;
=======
#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <cstring>

int main()
{
    std::string s1, s2;
    std::cin >> s1 >> s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    std::cout << strcmp(s1.c_str(), s2.c_str()) << std::endl;
    return 0;
>>>>>>> b9f7f5e043190485111f18651093313dd6b4ade8
}