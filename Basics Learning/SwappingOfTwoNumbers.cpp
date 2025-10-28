#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int a, b;
    cin >> a >> b;
    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After swapping:" << endl;
    cout << "First number: " << a << endl;
    cout << "Second number: " << b << endl;

    return 0;

    return 0;
}