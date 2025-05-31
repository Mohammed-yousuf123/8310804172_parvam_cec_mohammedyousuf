/*A neon is a number where the sum of digits of square of the number is equal to the number*/
#include <iostream>
using namespace std;
int main() 
{
    int n, sum = 0, digit;
    cout << "Enter any number: ";
    cin >> n;
    int square = n * n;    
    while (square > 0) 
    {
        digit = square % 10;
        sum += digit;
        square /= 10; 
    }
    if (sum == n) 
    {
        cout << " Yes, it is a neon number:" << n << endl;
    } 
    else 
    {
        cout << " No, it is not a neon number:" << n << endl;
    }
    return 0;
}