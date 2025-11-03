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
    return 0;
}