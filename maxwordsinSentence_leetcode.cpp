#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int words(0), maxi(0);
        for (int i = 0; i < sentences.size(); i++)
        {
            words = 0;
            for (int j = 0; sentences[i][j] != '\0'; j++)
            {
                if(sentences[i][j] == ' ')
                {
                    words++;
                }
            }
            if (maxi < words)
            {
                maxi = words;
            }
        }
        return maxi + 1;
    }
};
