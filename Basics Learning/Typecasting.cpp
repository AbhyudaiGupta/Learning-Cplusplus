#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    //// Typecasting from int to float
    // int x;
    // cin >> x;
    // float y = (float)x;
    // cout << y/2 << endl;

    //// Typecasting from char to int
    // char ch;
    // cin >> ch;
    // cout << int(ch) << endl;

    //// Typecasting from int to char
    int x;
    cin >> x;
    char ch = char(x);
    cout << ch << endl;
}