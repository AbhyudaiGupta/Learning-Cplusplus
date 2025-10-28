#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int a, b, c, d, n;
    cin >> n;
    a = n % 10;
    b = (n / 10) % 10;
    c = (n / 100) % 10;
    d = (n / 1000) % 10;
    cout << "Sum of digits: " << a + b + c + d << endl;

    return 0;
}