#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,x,y,z;
    cout<<"Eirst Fraction is : " ;
    cin>>a;
    cout<<"/";
    cin>>b;
    cout<<"Second Fraction is : " ;
    cin>>c;
    cout<<"/";
    cin>>d;
    x=a*d;
    y=b*c;
    z=b*d;
    cout<<"Sum of two fraction is : " <<(x+y)<<"/"<<z<<endl;
    return 0;
}
