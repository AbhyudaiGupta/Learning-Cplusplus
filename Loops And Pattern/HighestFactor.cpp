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
    int highestFactor = 1;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            highestFactor = i;
        }
    }
    cout << highestFactor << endl;

    // reverse for loop
    for (int i = n / 2; i >= 1; i--)
    {
        if (n % i == 0)
        {
            cout << i << endl;
            break;
        }
    }
    
    return 0;
}