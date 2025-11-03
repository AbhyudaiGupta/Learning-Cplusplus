#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    // by while and do while loop
    int n;
    cin >> n;
    int fact = 1;
    while (n > 0)
    {
        fact = fact * n;
        n--;
    }
    cout << fact << endl;

    return 0;
}