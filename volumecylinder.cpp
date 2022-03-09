#include <iostream>
using namespace std;

int main()
{
    int64_t height, radius, cylindervolume;
    cout << "Enter the radius of the cylinder: ";
    cin >> radius;

    cout << endl;

    cout << "Enter the Height of the cylinder: ";
    cin >> height;

    cylindervolume = (3.1428 * (radius * radius) * height);

    cout << "The Volume of the Cylinder is: " << cylindervolume << endl;

    return 0;
}