#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x1, x2, y1, y2;
    cin >> x1;
    cin >> y1;
    cin >> x2;
    cin >> y2;
    // Instead of abs you can also use max and min...
    double surface = abs( (x1 - x2) ) * abs( (y1 - y2) );
    double perimeter = 2 * ( abs( (x1 - x2) ) + abs( (y1 - y2) ) );

    cout << surface << endl;
    cout << perimeter << endl;

    return 0;
}
