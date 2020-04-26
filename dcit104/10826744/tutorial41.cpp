/* Write a C++ program to find the smallest integer among a list of positive integers */

#include <iostream>
using namespace std;

int main()
{
    int idata[5], kcount, vsmallest;

    for (kcount = 0; kcount <= 4; kcount = kcount + 1)
    {
        cout << "Enter the  data for array location "
             << kcount << " and press ENTER key"
             << endl;

        cin >> idata[kcount];
    }

    vsmallest = idata[0];

    for (kcount = 1; kcount <= 4; kcount++)
    {
        if (idata[kcount] < vsmallest)
        {
            vsmallest = idata[kcount];
        }
    }

    cout << endl
         << "\tResultof Find the smallest integer";
    cout << endl
         << "\t== == == == == == == == == == == ="
         << endl;
    cout << "\tSerial"
         << "\tdata" << endl;
    cout << "\t-- ---"
         << "\t-- -" << endl;

    for (kcount = 0; kcount <= 4; kcount++)
    {
        cout << "\t  " << kcount << "\t " << idata[kcount] << endl;
    }

    cout << "The found smallest integer is : " << vsmallest << endl;

    return 0;
}
