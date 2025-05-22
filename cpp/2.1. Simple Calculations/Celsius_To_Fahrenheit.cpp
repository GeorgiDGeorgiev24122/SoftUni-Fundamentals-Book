#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(2);
    double celsius;

    cin >> celsius;

    cout << (celsius * 1.8) + 32 << endl;

    return 0;
}
