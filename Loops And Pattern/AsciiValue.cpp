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

    for (int i = 0; i < n; i++)
    {
        int upper = 65 + i;
        int lower = 97 + i;

        cout << upper << " " << (char)upper << "   ";
        cout << lower << " " << (char)lower << endl;
        if (upper == 150 || lower == 150)
            break;
    }

    return 0;
}