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
}