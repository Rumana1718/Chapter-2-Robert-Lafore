#include<iostream>
#include<CTYPE.H>
using namespace std;
int main()
{
    char ch;
    int a;
    cout<<"Enter a character : ";
    cin>>ch;
    a=islower(ch);
    cout<<a;
    return 0;
}
