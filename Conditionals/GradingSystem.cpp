#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int m;
    cin >> m;
    if (m < 0 || m > 100)
    {
        cout << "Invalid marks!" << endl;
        return 0;
    }

    else if (m >= 90 && m <= 100)
    {
        cout << "A+";
    }
    else if (m >= 80 && m <= 89)
    {
        cout << "A";
    }
    else if (m >= 70 && m <= 79)
    {
        cout << "B";
    }
    else if (m >= 60 && m <= 69)
    {
        cout << "C";
    }
    else if (m >= 50 && m <= 59)
    {
        cout << "D";
    }
    else
    {
        cout << "F";
    }

    return 0;
}