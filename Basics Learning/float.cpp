#include <iostream>
using namespace std;

int main() {
    //input allocated from file for local testing
    
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    float num1 = 6, num2 = 5, sum;
    cin >> num1 >> num2;
    sum = num1 + num2;  
    cout << sum << endl;
    
    return 0;
}