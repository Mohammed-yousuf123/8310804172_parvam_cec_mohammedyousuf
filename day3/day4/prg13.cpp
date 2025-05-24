/*swapingb of 2 variables using arthematic*/
#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    cout<<"before swaping a="<<a<<" b="<<b<<endl;
    a=a*b; 
    b=a/b; 
    a=a/b; 
    cout<<"after swaping a="<<a<<" b="<<b<<endl;
    return 0;
}