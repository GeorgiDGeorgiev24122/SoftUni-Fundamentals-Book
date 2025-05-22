#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    string figure_Shape;
    cin >> figure_Shape;
    
    transform(figure_Shape.begin(), figure_Shape.end(), figure_Shape.begin() , ::tolower );

    if(figure_Shape == "square")
    {
        float length; 
        cin >> length;
        cout << fixed << setprecision(3)  << length * length << endl;
    }
    else if(figure_Shape == "rectangle")
    {
        float length, width;
        cin >> length >> width;

        cout << fixed << setprecision(3)  << length * width << endl;
    }
    else if (figure_Shape == "circle")
    {
        float radius;
        cin >> radius;
        cout << fixed << setprecision(3)  << 3.141592653589793 * pow(radius, 2)  << endl;
    }
    else if( figure_Shape == "triangle")
    {
        float side, height;
        cin >> side >> height;

        cout << fixed << setprecision(3) << (side / 2) * height << endl;
    }

    return 0;
}