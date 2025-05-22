#include <iostream> 

using namespace std;

int main()
{
    cout << "Inches = ";
    double inches;
    cin >> inches;
    double centimeters = inches * 2.54;
    cout << "Centimeters = ";
    cout << centimeters << endl;

    return 0;
}
