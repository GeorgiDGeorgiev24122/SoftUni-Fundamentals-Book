#include <iostream>

using namespace std;

int main()
{
    int hours, minutes;

    cin >> hours >> minutes;

    minutes += 15;
    if(minutes > 59)
    {
        minutes -= 60;
        if (++hours > 23)
            hours = 0;
    }
    if(minutes >= 10)
        cout << hours << ":" << minutes << endl;
    else
        cout << hours << ":" << "0" << minutes << endl;
    return 0;
}