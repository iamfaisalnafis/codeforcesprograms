#include <iostream>
using namespace std;

int main()
{
    char s;
    bool isLowerCaseVowel, isUpperCaseVowel;

    cout << "Enter a Character or an Alphabet: ";
    cin >> s;

    isLowerCaseVowel = (s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u');
    isUpperCaseVowel = (s == 'A' || s == 'E' || s == 'I' || s == 'O' || s == 'U');

    if (!isalpha(s))
    {
        cout << "Error! Non Alphabetic Character Detected..";
    }
    else if (isLowerCaseVowel || isUpperCaseVowel)
    {
        cout << "The entered Character is a Vowel..";
    }
    else
    {
        cout << "The entered Character is a Consonant..";
    }
    return 0;
}