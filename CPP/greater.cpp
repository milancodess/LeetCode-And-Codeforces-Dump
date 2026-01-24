#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    if (a > b)
    {
        cout << a << " is greater.";
    }
    else if (b > a)
    {
        cout << b << " is greater. ";
    }
    else
    {
        cout << "Both are equal";
    }
}