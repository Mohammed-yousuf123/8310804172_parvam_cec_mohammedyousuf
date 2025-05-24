/*convert binary to decimal*/
#include <iostream>
using namespace std;
int main()
{
    int n, decimal=0, base=1, digit;
    cout<<"Enter a binary number:";
    cin>>n;
    while(n>0)
    {
        digit=n % 10; 
        decimal+=digit*base; 
        n/=10; 
        base*=2; 
    }
    cout<<"decimal equivalent:"<<decimal<<endl;
    return 0;
}