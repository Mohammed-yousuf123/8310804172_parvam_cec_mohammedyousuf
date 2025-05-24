/*using while create*/
#include<iostream>
using namespace std;
int main()
{
    int n,digit;
    cout<<"enter the number";
    cin>>n;
    while(n>0)
    {
        digit=n%10;
        cout<<"digit="<<digit<<endl;
        n=n/10;
        rev=rev*10+digit;
    }
    cout<<"reverse of the number:"<<rev ;
    return 0;
}