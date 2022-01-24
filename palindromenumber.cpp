#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        long long rem, digit, rev(0);
        long long n = x;
        if (x < 0)
        {
            return false;
        }
        while (x != 0)
        {
            rem = x % 10;
            rev = rev * 10 + rem;
            x /= 10;
        }
        return n == rev;
    }
};