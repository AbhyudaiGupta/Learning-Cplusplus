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
    bool flag = true;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = false;
            break;
        }
    }
    if (n == 1)
    {
        cout << "Neither Prime nor Composite";
    }
    if (flag)
    {
        cout << "Prime Number";
    }
    else
    {
        cout << "Composite Number";
    }

    return 0;
}