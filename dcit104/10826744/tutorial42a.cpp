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

    kcount = 1;
    while (kcount <= 4)
    {
        if (idata[kcount] < vsmallest)
        {
            vsmallest = idata[kcount];
        }

        kcount++;
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

    kcount = 0;
    while (kcount <= 4)
    {
        cout << "\t  " << kcount << "\t " << idata[kcount] << endl;
        kcount++;
    }

    cout << "The found smallest integer is : " << vsmallest << endl;

    return 0;
}

/* After changing the for loop into a while nothing much changed, except the number of 
lines which increased and also i had to put the loop counter initializer variable 
outside the while loop, and then the 'next` inside the body of the while loop */

/* I modified the algorithm to use a while loop */