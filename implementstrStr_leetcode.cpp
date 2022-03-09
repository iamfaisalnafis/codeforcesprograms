#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int strStr(string h, string nd) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        int n = h.length();
        int m = nd.length();
        if(m==0)
        {
            return 0;
        }
        if(m>n)
        {
            return -1;
        }
        int k = 0;
        int i = 0;
        int flag = 0;
        int index = 0;
        int count = 0;
        while(i<n)
        {
            if(h[i]==nd[k]&&i+m-1<n&&h[i+m-1] == nd[m-1]&&flag == 0 || h[i]==nd[k]&&flag==1)
            {
                if(flag==0)
                {
                    index = i;
                }
                flag = 1;
                i++;
                k++;
                if(k>=m)
                {
                    return index;
                }
                continue;
            }
            if (h[i]!=nd[k] and flag==1)
            {
                k=0;
                flag=0;
                i = index+1;
                index = 0;
                continue;
            }
            i++;
        }
        return -1;
    }
};
