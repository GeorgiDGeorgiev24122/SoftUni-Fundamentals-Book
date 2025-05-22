#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int working_days;
    cin >> working_days;

    double money_per_day;
    cin >> money_per_day;

    double dollar_rate;
    cin >> dollar_rate;

    double salary {working_days * money_per_day};
    salary = (salary * 12) + (salary * 2.5);
    salary =  ( salary - (salary * 0.25) ) * dollar_rate;

    salary = salary / 365;

    cout << fixed << setprecision(2);

    cout << salary << endl;

    return 0;
}
