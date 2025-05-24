/*sumession*/
#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,num;
    cout<<"enter the n number :";
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        sum=sum+i;
        cout<<"sum:"<<sum<<"\n";
    }
    cout<<"total sum:"<<sum<<"\n";
    return 0;
}