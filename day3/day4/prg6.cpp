/*calculate the compound intrest*/
#include<iostream>
using namespace std;
int main()
{
    float p, r, t, ci;
    cout<<"enter principle amount:";
    cin>>p;
    cout<<"enter rate of interesr:";
    cin>>r;
    cout<<"enter time in years:";
    cin>>t;
    cin>>ci;
    ci=p*(pow((1+r/100),t)-1);
    cout<<"ci is:"<<ci<<endl;
return 0;
}