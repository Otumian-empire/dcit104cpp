#include <iostream>

using namespace std;


int main()
{
    int x[] = {1,2, 8,9,4};


//    for (int q = 0; q < 5; q++) {
//            cout << q << " - " <<  x[q] << endl;
//    }

    int q = 0;

    while(q < 5) {
        cout << q << " - " <<  x[q] << endl;
        q++;
    }

    return 0;
}
