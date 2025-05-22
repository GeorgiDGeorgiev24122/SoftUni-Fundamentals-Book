#include <iostream>

using namespace std;

int main()
{
    float internet_speed;
    cin >> internet_speed;

    if(internet_speed <= 10)
        cout << "slow" << endl;
    else if(internet_speed > 10 && internet_speed <= 50)
        cout << "average" << endl;
    else if(internet_speed > 50 && internet_speed <= 150)
        cout << "fast" << endl;
    else if(internet_speed > 150 && internet_speed <= 1000)
        cout << "ultra fast" << endl;
    else
        cout << "extremely fast" << endl;

    
    return 0;
}