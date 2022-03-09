#include <bits/stdc++.h>
using namespace std;

int sqrtProb(double n, double i, double j)
{
    double mid = (i + j) / 2;
    double mul = mid * mid;
    if ((mul == n) || (abs(mul - n) < 0.00001)) {
        return mid;
    }
    else if (mul < n)
    {
        return sqrtProb(n, mid, j);
    }
    else
    {
        return sqrtProb(n, i, mid);
    }
}

int mySqrt(int x)
{
    double i = 1;
    bool found = false;
    while (!found)
    {
        if (i * i == x)
        {
            return i;
            found = true;
        }
        else if(i * i > x)
        {
            double res = sqrtProb(x, i - 1, i);
            found = true;
            return res;
        }
    }
    return 0;
}

int main()
{
    return 0;
}
