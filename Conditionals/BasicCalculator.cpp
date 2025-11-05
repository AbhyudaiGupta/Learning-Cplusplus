#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

//by ladder if else

    int a, b;
    char op;
    cin >> a;
    cin >> op;
    cin >> b;
    if (op == '+')
    {
        cout << a + b;
    }
    else if (op == '-')
    {
        cout << a - b;
    }
    else if (op == '/')
    {
        cout << a / b;
    }
    else if (op == '*')
    {
        cout << a * b;
    }
    else
    {
        cout << "Can't compute";
    }

    return 0;
}