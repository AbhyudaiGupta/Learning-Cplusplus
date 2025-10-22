#include <iostream>
using namespace std;
int main()
{
    //terminal input output redirection for local testing
    int a;
    cout << "Enter the length of the side of the square: ";
    cin >> a;

    int area = a * a;
    cout << "The area of the square is: " << area << endl;

    return 0;
}