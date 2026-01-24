#include <iostream>
using namespace std;
int main()
{
    int n;

    cout << "Enter number: ";
    cin >> n;

    if (n % 5 == 0 && n % 3 == 0)
    {
        cout << n << " is divisible by both 3 and 5.";
    }
    else
    {
        cout << n << " is not divisible by both 3 and 5.";
    }
}