#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main()
{
    char s0[] = "Tetrahedron";
    char s1[] = "Cube";
    char s2[] = "Octahedron";
    char s3[] = "Dodecahedron";
    char s4[] = "Icosahedron";
    int n, sum(0);
    cin >> n;
    while (n--)
    {
        char m[15] = "";
        cin >> m;
        if(0 == strcmp(m, s0))
        {
            sum += 4;
        }
        if(0 == strcmp(m, s1))
        {
            sum += 6;
        }
        if(0 == strcmp(m, s2))
        {
            sum += 8;
        }
        if(0 == strcmp(m, s3))
        {
            sum += 12;
        }
        if(0 == strcmp(m, s4))
        {
            sum += 20;
        }
    }
    cout << sum << endl;
    return 0;
}