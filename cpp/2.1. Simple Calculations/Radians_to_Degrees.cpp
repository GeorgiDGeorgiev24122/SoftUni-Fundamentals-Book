#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double radians;

    cin >> radians;
    
    double degrees = radians * (180 / M_PI);

    cout << degrees << endl;
    


    return 0;
}
