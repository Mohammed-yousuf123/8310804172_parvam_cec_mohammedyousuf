/*a perfect number is a positive integer that is equal to the sum of its proper divisors (including the number itself)*/
#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter any number: ";
    cin >> n;
    for (int i = 1; i < n; i++) 
    {
        if (n % i == 0) 
        {
            sum += i; 
        }
    }
    if (sum == n) 
    {
        cout << "Yes, it is a perfect number: " << n << endl;
    } 
    else 
    {
        cout << "No, it is not a perfect number: " << n << endl;
    }
    return 0;
}