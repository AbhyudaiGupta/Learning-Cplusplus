#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int bs, hra, da, gs, pf;
    cin >> bs;
    da = 0.25 * bs;
    hra = 0.15 * bs;
    gs = bs + hra + da;
    pf = 0.10 * gs;
    cout << "The Net Salary is: " << gs - pf;

    return 0;
}