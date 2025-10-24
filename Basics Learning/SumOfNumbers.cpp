#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the number of integers to sum: ";
    cin >> n; // Read the number of integers to sum

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cout << "Enter integer " << (i + 1) << ": ";
        cin >> x; // Read each integer
        sum += x; // Add it to the sum

        cout << sum << endl; // Output the result

        return 0;
    }
