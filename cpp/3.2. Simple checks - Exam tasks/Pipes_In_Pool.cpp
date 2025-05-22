#include <iostream>

using namespace std;

int main()
{
    int poolvolume {};
    int pipe1 {};
    int pipe2 {};
    double hours {};
    cin >> poolvolume >> pipe1 >> pipe2 >> hours;
    double water { (pipe1 * hours) + (pipe2 * hours) };
    if(water <= poolvolume)
    {
        double pipe1_Water {pipe1*hours};
        double pipe2_Water {pipe2*hours};
        cout << "The pool is " << static_cast<int>((water/poolvolume) * 100) << "% full. Pipe 1: " << static_cast<int>((pipe1_Water/ water) * 100) << "%. Pipe 2: " << static_cast<int>((pipe2_Water/ water) * 100) << "%." << endl;
    }
    else
        cout << "For " << hours << " hours the pool overflows with " << (water-poolvolume) << " liters." << endl;
    return 0;
}