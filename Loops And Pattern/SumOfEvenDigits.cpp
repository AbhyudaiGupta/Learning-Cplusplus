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
    int sum = 0;
    while (n != 0)
    {

        int digit = n % 10;
        if (digit % 2 == 0)
        {
            sum += digit;
        }
        n = n / 10;
    }
    cout << sum << endl;
    return 0;
}