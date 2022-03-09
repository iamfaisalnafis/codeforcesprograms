#include <iostream>
using namespace std;

int main()
{
    string p;
    cin >> p;
    int count(0);
    for (int i = 0; i < p.length(); i++)
    {
        if(p[i] == 'H' || p[i] == 'Q' || p[i] == '9')
        {
            count++;
        }
    }
    if (count > 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
