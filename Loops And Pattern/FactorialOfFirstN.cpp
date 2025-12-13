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

    long long factorial = 1;
    for (int i = 0; i <= n; i++)
    {
        if (i == 0)
            factorial = 1;
        else
            factorial *= i;

        cout << i << "! = " << factorial << endl;
    }
    return 0;
}