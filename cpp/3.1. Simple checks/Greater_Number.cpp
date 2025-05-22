#include <iostream>

using namespace std;

int main()
{
    int num1,num2;

    cin >> num1 >> num2;
    if(num1 > num2)
        cout << num1;
    else // if num1 isn't greater than num2, then either num2 is greater than num1 or they are equal
        cout << num2;

    return 0;
}