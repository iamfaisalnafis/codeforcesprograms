#include <iostream>
using namespace std;

int main()
{
    int64_t side, cubevolume;
    cout << "Enter the length of the side: ";
    cin >> side;

    cubevolume = side * side * side;

    cout << endl;

    cout << "The Volume of the cube is: " << cubevolume << endl;

    return 0;
}