#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int a, b, c;
    cin >> a >> b >> c;

    if (a == b && b == c)
    {
        cout << "All numbers are equal: " << a;
    }
    else if (a >= b && a >= c)
    {
        if ((a == b && a > c) || (a == c && a > b))
            cout << "a is greatest (appears more than once) = " << a;
        else
            cout << "a is greatest = " << a;
    }
    else if (b >= a && b >= c)
    {
        if ((b == a && b > c) || (b == c && b > a))
            cout << "b is greatest (appears more than once) = " << b;
        else
            cout << "b is greatest = " << b;
    }
    else
    {
        if (c == a || c == b)
            cout << "c is greatest (appears more than once) = " << c;
        else
            cout << "c is greatest = " << c;
    }
    return 0;
}
