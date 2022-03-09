#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string intToRoman(int n){
        string m[] = {"", "M", "MM", "MMM"};
        string c[] = { "",  "C",  "CC",  "CCC",  "CD", "D", "DC", "DCC", "DCCC", "CM" };
        string x[] = { "",  "X",  "XX",  "XXX",  "XL", "L", "LX", "LXX", "LXXX", "XC" };
        string i[] = { "",  "I",  "II",  "III",  "IV", "V", "VI", "VII", "VIII", "IX" };

        string thousands = m[n / 1000];
        string hundreds = c[(n % 1000) / 100];
        string tens = x[(n % 100) / 10];
        string ones = i[n % 10];

        string ans = thousands + hundreds + tens + ones;
        return ans;
    }
};