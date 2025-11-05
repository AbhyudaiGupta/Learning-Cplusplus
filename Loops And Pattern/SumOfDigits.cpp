#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // by while and do whlw loop
    int n;
    cin >> n;
    int sum = 0;
    while (n > 0)
    {
        int digit = n % 10;
        sum += digit;
        n = n / 10;
    }
    cout << sum << endl;

    // by for loop
    int n;
    cin >> n;
    int sum = 0;
    for (; n > 0; n = n / 10)
    {
        int digit = n % 10;
        sum += digit;
    }
    cout << sum << endl;

    return 0;
}