/*factors of numbers add to the array and the prime check code*/
#include <iostream>
using namespace std;
int main() 
{
    int n, i, j = 0, arr[100], ctr = 0;
    cout << "Enter any number: ";
    cin >> n;
    for (i = 1; i <= n; i++) 
    {
        if (n % i == 0) 
        {
            arr[j] = i; 
            j++;
        }
    }
    cout << "Factors of " << n << " are: ";
    for (i = 0; i < j; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    {
        if (n % i == 0) 
        {
            ctr++;
        }
    }
    if (ctr > 0) 
    {
        cout << "No, it is not a prime number." << n << endl;
    } 
    else 
    {
        cout << "yes, it is a prime number." << n << endl;
    }
    return 0;
}