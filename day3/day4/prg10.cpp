/*convert decimal to binary*/
#include <iostream>
using namespace std;
int main()
{
    int n, binary=0, base=1, digit;
    cout<<"Enter a decimal number:";
    cin>>n;
    while(n>0)
    {
        digit=n % 2; 
        binary+=digit*base; 
        n/=2; 
        base*=10; 
    }
    cout<<"Binary equivalent:"<< binary<<endl;
    return 0;
}