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
    long long fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    cout << fact << endl;
    return 0;

    return 0;
}