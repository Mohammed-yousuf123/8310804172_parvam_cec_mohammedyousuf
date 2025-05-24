#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,num;
    cout<<"enter the number of elements:";
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        cout<<"enter the number"<<i<<":";
        cin>>num;
        sum+=num;
    }
    cout<<"the sum of numbers is:"<<sum<<endl;
    return 0;
}