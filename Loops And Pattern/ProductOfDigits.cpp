#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    int product = 1;
    while (n != 0)
    {
        int digit = n % 10;
        product *= digit;
        n = n / 10;
    }

    cout << product << endl;
    return 0;
}