#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    // by nested while loop
    int n;
    cin >> n;
    int i = 1;
    int row = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << row << " ";
            row++;
            j++;
        }
        cout << endl;
        i++;
    }

    // by for loop
    int row1 = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << row1 << " ";
            row1++;
        }
        cout << endl;
    }

    return 0;
}