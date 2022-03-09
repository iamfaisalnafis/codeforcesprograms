#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        char temp;

        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] == '{' || s[i] == '[' || s[i] == '(')
            {
                st.push(s[i]);
            }

            if (st.empty())
            {
                return false;
            }

            switch (s[i])
            {
            case ')':
                temp = st.top();
                st.pop();
                if (temp != '(')
                {
                    return false;
                }
                break;
            case '}':
                temp = st.top();
                st.pop();
                if (temp != '{')
                {
                    return false;
                }
                break;
            case ']':
                temp = st.top();
                st.pop();
                if (temp != '[')
                {
                    return false;
                }
                break;
            }
        }
        return st.empty();
    }
};