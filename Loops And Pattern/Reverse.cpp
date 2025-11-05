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
    int rev = 0;
    while (n != 0)
    {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }
    cout << rev << endl;
    
    // by for loop
    int n1;
    cin >> n1;
    int rev1 = 0;
    for (; n1 != 0;)
    {
        int digit1 = n1 % 10;
        rev1 = rev1 * 10 + digit1;
        n1 /= 10;
    }
    cout << rev1 << endl;

    return 0;
}