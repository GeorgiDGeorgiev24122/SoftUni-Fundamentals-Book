#include <iostream>

using namespace std;

int main()
{
    double grade;
    cin >> grade;

    if (grade >= 5.50)
    {
        cout << "Excellent!" << endl;
    }
    else
    {
        cout << "Not excellent." << endl;
    }

    return 0;
}