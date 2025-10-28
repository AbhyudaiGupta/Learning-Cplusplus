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
    int largest = (a >= b) ? ((a >= c) ? a : c) : ((b >= c) ? b : c);
    cout << "Largest number is: " << largest;
    return 0;
}
