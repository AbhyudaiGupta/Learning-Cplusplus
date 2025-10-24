// Compares the scores of two teams ("Dominator" and "Everule").
// Each team's total score is the sum of its base score and a modifier.
// Prints which team wins based on the total score comparison.
#include <iostream>
using namespace std;

int main()
{
    int r1, r2;
    cout << "Enter the value of Dominator: ";
    cin >> r1;
    cout << "Enter the value of Everule: ";
    cin >> r2;

    int D1, D2;
    cout << "Enter the value of D1: ";
    cin >> D1;
    cout << "Enter the value of D2: ";
    cin >> D2;

    if ((r1 + D1) > (r2 + D2))
    {
        cout << "dominator";
    }
    else
    {
        cout << "EVERULE";
    }

    return 0;
}
