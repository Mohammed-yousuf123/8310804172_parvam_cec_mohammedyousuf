#include <iostream>
using namespace std;
int main()
{
    int n,i,ctr=0;
    cout << "enter any number:"<<endl;
    cin >> n;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            ctr++;
        }
        cout << ctr<<endl;
    }
    if(ctr>0)
    {
        cout << n << " is not a prime number." << endl;
    }
    else
    {
        cout << n << " is a prime number." << endl;
    }
    return 0;
}