#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    char word;

    cout << "Enter word: ";
    cin >> word;

    //     if (word >= 'A' && word <= 'Z')
    //     {
    //         cout << "Uppercase.";
    //     }
    //     else if (word >= 'a' && word <= 'z')
    //     {
    //         cout << "Lowercase.";
    //     }
    //     else if (word >= '0' && word <= '9')
    //     {
    //         cout << "Digit.";
    //     }
    //     else
    //     {
    //         cout << "Special Symbol.";
    //     }
    // }

    // OR WE CAN USE ANOTHER METHOD BY IMPORTING CCTYPE
    if (isupper(word))
    {
        cout << "Uppercase.";
    }
    else if (islower(word))
    {
        cout << "Lowercase.";
    }
    else if (isdigit(word))
    {
        cout << "Digit.";
    }
    else
    {
        cout << "Special Symbol.";
    }
}