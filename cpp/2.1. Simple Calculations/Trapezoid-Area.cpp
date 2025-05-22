#include <iostream>

using namespace std;

int main()
{
    double b1, b2, h;
    cout << "Enter the needed data in the following format - b1, b2, h: ";
    cin >> b1 >> b2 >> h;

    double area = (b1 + b2) * h/2;

    cout << "The area of the trapezoid is: " << area << endl;

    return 0;
}
