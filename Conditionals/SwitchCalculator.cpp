#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    //// CALCULATOR WITH SWITCH
    int num1, num2, result;
    char op;

    // cout << "Enter 1st integers: ";
    cin >> num1;
    // cout << "Enter an operator (+, -, *, /): ";
    cin >> op;
    // cout << "Enter 2nd integers: ";
    cin >> num2;

    switch (op)
    {
    case '+':
        result = num1 + num2;
        cout << num1 << " + " << num2 << " = " << result;
        break;

    case '-':
        result = num1 - num2;
        cout << num1 << " - " << num2 << " = " << result;
        break;

    case '*':
        result = num1 * num2;
        cout << num1 << " * " << num2 << " = " << result;
        break;

    case '/':
        if (num2 != 0)
            cout << num1 << " / " << num2 << " = " << num1 / num2;
        else
            cout << "Error! Division by zero is not possible.";
        break;

    default:
        cout << "Invalid !!";
        break;
    }

    return 0;
}