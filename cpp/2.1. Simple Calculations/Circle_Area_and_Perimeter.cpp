#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the radius of the circle: ";
    double radius;
    cin >> radius;

    double area  = 3.14159 * radius * radius;
    double perimeter = 2 * 3.14159 * radius;

    cout << "Area : " << area << endl;
    cout << "Perimeter : " << perimeter << endl;


    return 0;
}
