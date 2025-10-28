#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int a, b, c, d, n, rev;
    cin >> n;
    a = n % 10;
    b = (n / 10) % 10;
    c = (n / 100) % 10;
    d = (n / 1000) % 10;

    rev = a * 1000 + b * 100 + c * 10 + d;

    cout << ((n == rev) ? "Yes" : "No") << endl;

    return 0;
}
