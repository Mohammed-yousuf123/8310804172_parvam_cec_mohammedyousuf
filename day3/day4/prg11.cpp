 /*swaping of 2 variables by using tamprory variables*/
#include<iostream>
using namespace std;
int main()
{
     int a, b, temp;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    cout<<"before swaping a="<<a<<"b="<<b<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"after swaping a="<<a<<"b="<<b<<endl;
    return 0;
}
    
