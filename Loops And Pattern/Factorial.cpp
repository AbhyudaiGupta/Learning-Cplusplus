#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    // by while and do while loop
    int n;
    cin >> n;
    int fact = 1;
    while (n > 0)
    {
        fact = fact * n;
        n--;
    }
    cout << fact << endl;

    // by for loop
    int n1;
    cin >> n1;
    int fact1 = 1;
    for (; n1 > 0; n1--)
    {
        fact1 = fact1 * n1;
    }
    cout << fact1 << endl;

    return 0;
}