#include <iostream>

using namespace std;

int main()
{
    int pos = 1;
    string pName;

    while (pos <= 3)
    {
        cout << "enter name for person " << pos << ": ";
        cin >> pName;
        cout << pos << " is " << pName << endl;

        pos = pos + 1;
    }

    return 0;
}
