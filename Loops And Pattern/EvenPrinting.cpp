#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    // while and do while loop
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
        i++;
    }
    return 0;
}