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
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    cout << "Number of digits are: " << count << endl;

    return 0;
}