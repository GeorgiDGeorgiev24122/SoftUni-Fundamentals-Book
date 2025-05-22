#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int VineyardArea {};
    double grapePerSquare {};
    int litersNeeded {};
    int workerCount {};
    cin >> VineyardArea >> grapePerSquare >> litersNeeded >> workerCount;

    // 40% of the Vineyard is used for wine production
    VineyardArea = 0.40 * VineyardArea;

    double grapes {VineyardArea * grapePerSquare};

    double wineProduced {grapes / 2.5};
    if(wineProduced < litersNeeded)
    {
        cout << "It will be a tough winter! More " << floor((litersNeeded - wineProduced)) << " liters wine needed." << endl;
    }
    else
    {
        cout << "Good harvest this year! Total wine: " << floor(wineProduced) << " liters." << endl;
        cout << ceil((wineProduced - litersNeeded)) << " liters left -> " << ceil((( wineProduced - litersNeeded ) / workerCount))  << " liters per person." << endl; 
    }



    return 0;
}