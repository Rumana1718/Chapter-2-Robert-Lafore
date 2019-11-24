#include<iostream>
#include<iomanip>
using namespace std;
int main()
{

    long population=2425785;
    cout<<"Portcity";
    char ch='.';
    cout<<setw(12)<<setfill(ch)<<population<<endl;
    return 0;
}
