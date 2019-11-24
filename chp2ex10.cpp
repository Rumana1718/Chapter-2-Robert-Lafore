#include <iostream>
using namespace std;
int main()
{

    int pounds;
    int shillings;
    int pence;
    double decimalpounds;
    float totalpence;

    cout << "enter number of pounds : ";
    cin >>pounds;

    cout << "enter number of shillings : ";
    cin >> shillings;

    cout << "enter number if pence : ";
    cin >> pence;


    totalpence = pounds*240 + shillings*12 + pence;

    decimalpounds = totalpence;

    cout << decimalpounds;

    return 0;
}
