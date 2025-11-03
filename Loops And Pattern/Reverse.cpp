#include <iostream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    //by while and do while loop
    int n;
    cin>>n;
    int rev = 0;
    while (n != 0) {    
        int digit = n % 10;
       rev = rev * 10 + digit;
        n /= 10;
    }
    
    return 0;
}