/*arrey of adding two numbers*/
#include <iostream>
using namespace std;
int main() {
    int size = 0, a[100], b[100], sum[100], i;
    cout<<"Enter the size of the arrays:";
    cin>>size;
    cout<<"Enter elements for first array:";
    for (i = 0; i<size; i++) 
    {
        cin>>a[i];
    }
    cout<<"Enter elements for second array:";
    for (i = 0; i<size; i++) 
    {
        cin>>b[i];
    }
    cout<<"Sum of the two arrays is:";
    for (i = 0; i<size; i++) 
    {
        sum[i]=a[i]+b[i];
        cout<<sum[i]<<" ";
    }
    cout<<endl;
    return 0;
}