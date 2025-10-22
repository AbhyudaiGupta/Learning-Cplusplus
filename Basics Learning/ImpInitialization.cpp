#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    cout << 5 / 2 << endl;     // Both operands are int so integer division
    cout << 5.0 / 2 << endl;   // One operand is float so float division
    cout << 5 / 2.0 << endl;   // One operand is float so float division
    cout << 5.0 / 2.0 << endl; // Both operands are float so float division

    return 0;
}