#include <bits/stdc++.h>

using namespace std;

int main()
{
    int amount, price, wrap;
    cin >> amount >> price >> wrap;

    if (amount < price)
    {
        return 0;
    }

    int choc = amount / price;

    choc = choc + (choc - 1) / (wrap - 1);
    
    cout << choc;

}
