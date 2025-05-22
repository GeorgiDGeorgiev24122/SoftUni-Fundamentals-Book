// ⚠️ Important: When printing expressions involving doubles (e.g., workedTime - hoursNeeded),
// cout may silently print unwanted decimal places like "129.000000" even if the value looks like "129".
// In your IDE, it might appear correctly as just "129", but the judge checks exact string output,
// and "129.000000" will fail the test.
// Example:
//   IDE shows:        Yes!129 hours left.
//   Actual printed:   Yes!129.000000 hours left.
//   Expected output:  Yes!129 hours left.
// Solution: Cast the result to int before printing:
//   cout << "Yes!" << (int)(workedTime - hoursNeeded) << " hours left." << endl;

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int hoursNeeded {};
    int daysAvailable {};
    int workerCount {};

    cin >> hoursNeeded >> daysAvailable >> workerCount;
    double daysWorked = 0.90 * daysAvailable;
    double workedTime =  floor((daysWorked * 10 ) * workerCount);
    if(workedTime >= hoursNeeded)
        cout << "Yes!" << (int)(workedTime - hoursNeeded) << " hours left." << endl;
    else
        cout << "Not enough time!" << (int)(hoursNeeded-workedTime) << " hours needed." << endl;

    return 0;
}