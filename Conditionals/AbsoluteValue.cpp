#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    // Program to find the absolute value of an integer
    int n;
    cin >> n;
    if (n >= 0)
    {
        cout << n << endl;
    }
    else
    {
        cout << -n << endl;
    }
// Absolute value changer
// if (n<0) n=-n;
//     {
//         cout << n << endl;
//     }
    return 0;
}