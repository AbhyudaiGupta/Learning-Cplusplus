#include <iostream>
using namespace std;

int main()
{
    //now onwards input output redirection via txt file for local testing
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    const float pi = 3.14;
    float r;
    cin >> r;
    cout << pi * r * r << endl;
    return 0;
}