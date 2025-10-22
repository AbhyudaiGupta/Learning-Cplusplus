#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    float P, R, T;
    cin >> P >> R >> T;
    cout << (P * R * T) / 100 << endl;
    return 0;
}