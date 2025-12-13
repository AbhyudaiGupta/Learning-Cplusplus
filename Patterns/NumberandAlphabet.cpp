#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            // Odd row: print alphabets
            char ch = 'A';
            for (int j = 1; j <= i; j++)
            {
                cout << ch << " ";
                ch++;
            }
        }
        else
        {
            // Even row: print numbers
            for (int j = 1; j <= i; j++)
            {
                cout << j << " ";
            }
        }
        cout << endl;
    }

    return 0;
}