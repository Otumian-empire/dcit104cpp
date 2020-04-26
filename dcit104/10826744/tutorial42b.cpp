/* Write a C++ program to find the smallest integer among a list of positive integers */

#include <iostream>
using namespace std;

int main()
{
    int idata[5], kcount, vsmallest;
    kcount = 0;

    do
    {
        cout << "Enter the  data for array location "
             << kcount << " and press ENTER key"
             << endl;

        cin >> idata[kcount];
        kcount = kcount + 1;

    } while (kcount <= 4);

    vsmallest = idata[0];

    kcount = 1;

    do
    {
        if (idata[kcount] < vsmallest)
        {
            vsmallest = idata[kcount];
        }

        kcount++;
    } while (kcount <= 4);

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

    do
    {
        cout << "\t  " << kcount << "\t " << idata[kcount] << endl;
        kcount++;
    } while (kcount <= 4);

    cout << "The found smallest integer is : " << vsmallest << endl;

    return 0;
}

/* After changing the for loop into a do-while loop, nothing much changed, 
except the number of lines which increased and also i had to put the loop
counter initializer variable outside the while loop, and then the 'next` 
inside the body of the while loop */

/* I modified the algorithm to use a do while loop */