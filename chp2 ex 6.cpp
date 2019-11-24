#include<iostream>
using namespace std;
int main()
{
    float b,f,g,j,u;
    cout<<"Enter the US dollar: ";
    cin>>u;
    b=u/1.487;
    f=u/0.172;
    g=u/0.584;
    j=u/0.00955;
    cout<< "British : "<<b<<" "<<"French: "<<f<<" "<<"German : "<<g<<" "<<"Japan : "<<j<<endl;
    return 0;

}
