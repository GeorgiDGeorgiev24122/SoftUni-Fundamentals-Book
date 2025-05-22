#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(2);
    double USD;
    cout << "Enter USD: " << endl;
    cin >> USD;

    cout << USD * 1.79549 << " BGN";
}
