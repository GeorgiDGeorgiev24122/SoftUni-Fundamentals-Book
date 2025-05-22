#include <iostream>

using namespace std;

int main()
{
    const int norm {30000};

    int vacation_days;
    cin >> vacation_days;
    
    int time_played { (365- vacation_days) * 63 + vacation_days * 127};
    // int norm_difference = norm - time_played;

    if (time_played > norm)
    {
        int norm_difference {time_played - norm};
        int hours = norm_difference /  60;
        int minutes = norm_difference % 60;
        cout << "Tom will run away" << endl;
        cout << hours << " hours and " << minutes << " minutes more for play" << endl;
    }
    else if (time_played < norm)
    {
        int norm_difference {norm - time_played};
        int hours = norm_difference /  60;
        int minutes = norm_difference % 60;
        cout << "Tom sleeps well" << endl;
        cout << hours << " hours and " << minutes << " minutes less for play" << endl;
    }
    return 0;
}