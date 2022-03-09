<<<<<<< HEAD
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    size_t n;
    string s;
    cin >> n >> s;
    s.erase(unique(s.begin(), s.end()), s.end());
    cout << n - s.length() << endl;
    return 0;
=======
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    size_t n;
    string s;
    cin >> n >> s;
    s.erase(unique(s.begin(), s.end()), s.end());
    cout << n - s.length() << endl;
    return 0;
>>>>>>> b9f7f5e043190485111f18651093313dd6b4ade8
}