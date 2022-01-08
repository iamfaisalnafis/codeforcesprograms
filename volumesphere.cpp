#include <iostream>
using namespace std;

int main()
{
    int64_t volume, radius;

    cout << "Enter the Radius of the sphere: ";
    cin >> radius;

    volume = ((4 / 3) * 3.1428 * (radius * radius));

    cout << "The Volume of the Sphere is: " << volume << endl;
}