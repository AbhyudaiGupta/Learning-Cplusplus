#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << char(j + 64) << " ";
    //     }
    //     cout << endl;

    cin >> n;

    for (int i = 0; i < n; i++)
    { // Rows
        for (int j = 0; j < n; j++)
        {                                 // Columns
            cout << char('A' + i) << " "; // Print same letter in each row
        }
        cout<<endl;
    }
    return 0;
}