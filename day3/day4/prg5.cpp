#include<iostream>
using namespace std;
int main()
{
    float p, q, t, si;
    cout<<"enter principle amount:";
    cin>>p;
    cout<<"enter rate of interest:";
    cin>>q;
    cout<<"enter time in years:";
    cin>>t;
    
    si=(p * q * t)/100;
    cout<<"simple interest is:"<< si << endl;
    return 0;
}