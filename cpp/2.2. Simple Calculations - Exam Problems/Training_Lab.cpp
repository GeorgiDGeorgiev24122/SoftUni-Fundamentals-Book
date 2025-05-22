#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "Enter the length and width of the study room: (in meters)" << endl;
    double length, width;
    cin >> length;
    cin >> width;

    
    length = (length * 100) / 120;
    width = (width * 100 - 100) / 70;

    int available_stations = floor(length) * floor(width) - 3;
    cout << "There are " << length << " rows" << " and " << width << " cols" << endl;
    cout << "There are " << available_stations << " seats available" << endl;

    return 0;
}
