#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "Enter price per kilogram of vegetables: " << endl;
    double vegetable_price;
    cin >> vegetable_price;

    cout << "Enter price per kilogram of fruits: " << endl;
    double fruits_price;
    cin >> fruits_price;

    cout << "Total kilograms of vegetables: " << endl;
    int vegetables_total;
    cin >> vegetables_total;

    cout << "Total kilograms of fruits: " << endl;
    int fruits_total;
    cin >> fruits_total;

    double sum = ( (vegetable_price * vegetables_total) + (fruits_price * fruits_total) ) / 1.94;
    
    cout << setprecision(15) << sum << endl;

    return 0;

}
