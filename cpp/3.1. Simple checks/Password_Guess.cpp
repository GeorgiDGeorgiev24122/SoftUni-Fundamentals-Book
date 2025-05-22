#include <iostream>

using namespace std;

const string real_Password {"s3cr3t!P@ssw0rd"};
int main()
{
    string password;
    cin >> password;

    if(password == real_Password)
        cout << "Welcome" << endl;
    else
        cout << "Wrong password!" << endl;

    return 0;
}
