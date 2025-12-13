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
    int num = n;
    int rev = 0;
    while (n != 0)
    {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }
    cout << "Reverse of the number: " << rev << endl;
    cout << "Original no. + Reversed: " << num + rev << endl;

    return 0;
}