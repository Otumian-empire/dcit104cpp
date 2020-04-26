/* Write a C++ program to find the largest integer among a list of positive integers */

#include <iostream>
using namespace std;

int main()
{
    int idata[5], kcount, vlargest;

    for (kcount = 0; kcount <= 4; kcount = kcount + 1)
    {
        cout << "Enter the  data for array location " << kcount << " and press ENTER key" << endl;
        cin >> idata[kcount];
    }

    vlargest = idata[0];

    for (kcount = 1; kcount <= 4; kcount++)
    {
        if (idata[kcount] > vlargest)
        {
            vlargest = idata[kcount];
        }
    }

    cout << "\n\tResultof Find the largest integer";
    cout << "\n\t == == == == == == == == == == == == == =\n";
    cout << "\tSerial"
         << "\tdata" << endl;
    cout << "\t-- -----"
         << "\t-- ----" << endl;

    for (kcount = 0; kcount <= 4; kcount++)
    {
        cout << "\t" << kcount << "\t" << idata[kcount] << "\n ";
    }

    cout << "The found largest integer is : " << vlargest << endl;

    return 0;
}
