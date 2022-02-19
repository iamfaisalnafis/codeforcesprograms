#include <iostream>
using namespace std;

int validcharName (string name)
{
    for (int i = 0; i < name.length(); i++)
    {
        if (!(name[i] >= 65 && name[i] <= 90) && !(name[i] >= 97 && name[i] <= 122) && !(name[i] >= 48 && name[i] <= 57))
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    string name;
    cout << "Enter the username: ";
    cin >> name;

    if (validcharName(name))
    {
        cout << "Valid Username." << "\n";
    }
    else
    {
        cout << "Invalid Username." << "\n";
    }
    return 0;
}
