#include <iostream>
#include <cmath>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    float totalMarks;
    cin >> totalMarks;
    int roundedMarks = (int)(totalMarks + 0.5);
    
    /// Alternative method to round negative numbers correctly via ternary operator
    // int roundedMarks = (totalMarks >= 0) ? (int)(totalMarks + 0.5) : (int)(totalMarks - 0.5);

    cout << "Total Marks: " << totalMarks << endl;
    cout << "Rounded Marks: " << roundedMarks << endl;

    return 0;
}
