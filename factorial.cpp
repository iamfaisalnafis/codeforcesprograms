<<<<<<< HEAD
#include <iostream>
using namespace std;

int main()
{
    int startRange, endRange, fact = 1;
    cout << "Enter a starting number: ";
    cin >> startRange;
    cout << endl;
    cout <<"Enter the ending number: ";
    cin >> endRange;

    for (int i = startRange; i <= endRange; i++)
    {
        fact = fact * startRange;
        cout << fact << " ";
    }
    cout << "The Factorial is: " << fact << endl;
=======
#include <iostream>
using namespace std;

int main()
{
    int startRange, endRange, fact = 1;
    cout << "Enter a starting number: ";
    cin >> startRange;
    cout << endl;
    cout <<"Enter the ending number: ";
    cin >> endRange;

    for (int i = startRange; i <= endRange; i++)
    {
        fact = fact * startRange;
        cout << fact << " ";
    }
    cout << "The Factorial is: " << fact << endl;
>>>>>>> b9f7f5e043190485111f18651093313dd6b4ade8
}