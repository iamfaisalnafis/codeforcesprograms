#include <iostream>
using namespace std;

int main()
{
    int64_t area, perimeter, l, b;

    cout << "Enter the Length of the rectangle: ";
    cin >> l;

    cout << endl;

    cout << "Enter the width of the rectangle: ";
    cin >> b;

    area = l * b;
    perimeter = 2 * (l * b);

    cout << endl;

    cout << "The area of the rectangle is: " << area << " & the perimeter is: " << perimeter << endl;

    return 0;
}