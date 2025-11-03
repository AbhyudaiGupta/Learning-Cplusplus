#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // by for loop
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cout << i << endl;
    }

    // by while loop
    int j = 1;
    while (j <= n)
    {
        cout << j << endl;
        j++;
    }
    return 0;
}