#include <bits/stdc++.h>
using namespace std;

int characterOccurence(string str, char c)
{
    int n = str.length();
    int startIndex = -1;
    int endIndex = -1;
    for(int i = 0; i < n; i++)
    {
        if(str[i] == c)
        {
            if(startIndex == -1)
            {
                startIndex = i;
            }
            endIndex = i;
        }
    }
    if (startIndex == -1){
        cout << "The character was not found in the String!" << endl;
    
    }else{
        cout << "First Occurence: " << startIndex << endl;
        cout << "Last Occurence: " << endIndex << endl;
    }
    return 0;
}



int main()
{
    string str;
    cout << "Enter a String: ";
    getline(cin, str);
    cout << "Enter a Character to find it's Occurence: ";
    char c;
    cin >> c;
    characterOccurence(str, c);
    return 0;
}
