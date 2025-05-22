#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double taxiPrice {0};
    double busPrice {0};
    double trainPrice {0};

    int kilometers;
    cin >> kilometers;
    string time;
    cin >> time;

    if (kilometers < 20)
    {
        if(time == "day")
        {
            taxiPrice = 0.70 + 0.79 * kilometers;
        }
        else if (time == "night")
        {
            taxiPrice = 0.70 + 0.90 * kilometers;
        }
        cout << taxiPrice << endl;
    }
    else if (kilometers >= 20 && kilometers < 100)
    {
        if(time == "day")
        {
            taxiPrice = 0.70 + 0.79 * kilometers;
        }
        else if (time == "night")
        {
            taxiPrice = 0.70 + 0.90 * kilometers;
        }
        busPrice = 0.09 * kilometers;
        cout << min(taxiPrice, busPrice) << endl;
    }
    else if (kilometers >= 100)
    {
        if(time == "day")
        {
            taxiPrice = 0.70 + 0.79 * kilometers;
        }
        else if (time == "night")
        {
            taxiPrice = 0.70 + 0.90 * kilometers;
        }
        busPrice = 0.09 * kilometers;
        trainPrice = 0.06 * kilometers;
        double minTB = min(taxiPrice, busPrice);
        cout << min(minTB, trainPrice) << endl;
    }




    return 0;
}