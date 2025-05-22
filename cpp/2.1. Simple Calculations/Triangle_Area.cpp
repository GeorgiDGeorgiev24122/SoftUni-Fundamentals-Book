#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(2);
    double a, h;
    cin >> a;
    cin >> h;
    
    cout << "Triangle area = " << (a * h / 2) << endl;

}
