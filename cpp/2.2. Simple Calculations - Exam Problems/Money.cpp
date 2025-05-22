#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double sum {0};
    int bitcoin;
    cin >> bitcoin;
    // Converting bitcoin into BGN
    sum += bitcoin * 1168;

    double yuan;
    cin >> yuan;

    // Converting Chinese yuan into BGN
    sum += (yuan * 0.15) * 1.76;
    // Converting BGN into EUR
    sum /= 1.95;

    double commision;
    cin >> commision;

    commision /= 100;
    sum -= commision * sum;
    cout << fixed << setprecision(2);
    cout << sum << endl;
    return 0;
}
