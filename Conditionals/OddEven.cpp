#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    //// To check whether a number is even or odd
    /// only if statement
    // int n;
    // cin >> n;
    // if (n % 2 == 0)
    // {
    //     cout << "Even" << endl;
    // }
    // if (n % 2 != 0)
    // {
    //     cout << "odd" << endl;
    // }
    /// if-else statement
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "Even" << endl;
    }
    else
    {
        cout << "odd" << endl;
    }
    return 0;
}