#include <iostream>

using namespace std;

int main()
{
    cout << "enter the length of the side of the site: " << endl;
    int square_side;
    cin >> square_side;
    square_side *= square_side;

    cout << "enter the width of one tile: " << endl;
    double width;
    cin >> width;

    cout << "enter the length of one tile: " << endl;
    double length;
    cin >> length;
    double total_tile {length * width};
    cout << "Enter the width of the bench: " << endl;
    double bench_width;
    cin >> bench_width;

    cout << "Enter the length of the bench: " << endl;
    double bench_length;
    cin >> bench_length;
    double total_bench {bench_length * bench_width};
    square_side -= total_bench;

    total_tile = square_side / total_tile;
    double time = total_tile * 0.2;

    cout << total_tile << endl;
    cout << time << endl;
    return 0;
}
