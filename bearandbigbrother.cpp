<<<<<<< HEAD
#include <iostream>

using namespace std;

int main()
{
    int a, b, c(0);
    cin >> a >> b;
    if (a>b)
    {
        c = 0;
    }
    else{
        while (a<=b)
        {
            a = a * 3;
            b = b * 2;
            c++;
        }
    }
    cout << c << endl;
    return 0;
=======
#include <iostream>

using namespace std;

int main()
{
    int a, b, c(0);
    cin >> a >> b;
    if (a>b)
    {
        c = 0;
    }
    else{
        while (a<=b)
        {
            a = a * 3;
            b = b * 2;
            c++;
        }
    }
    cout << c << endl;
    return 0;
>>>>>>> b9f7f5e043190485111f18651093313dd6b4ade8
}