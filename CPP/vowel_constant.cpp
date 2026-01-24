#include <iostream>
using namespace std;
int main()
{
    char word;

    cout << "Enter a word: ";
    cin >> word;

    if (word == 'A' || word == 'a' || word == 'E' || word == 'e' || word == 'I' || word == 'i' || word == 'O' || word == 'o' || word == 'U' || word == 'u')
    {
        cout << word << " is vowel.";
    }
    else
    {
        cout << word << " is consonant.";
    }
}