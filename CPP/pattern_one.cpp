#include <iostream>
using namespace std;
int main()
{
    int n = 4;

    // for (int i = 0; i < n; i++)
    // {
    //     cout << "*";
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << "\n";
    // }

    // OR WE CAN ALSO DO:
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        // cout << "\n";
        cout << endl;
    }
}