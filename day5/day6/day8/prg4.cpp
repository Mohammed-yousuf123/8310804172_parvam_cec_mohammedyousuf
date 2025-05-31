/*find the given number is emirp number or not*/
#include <iostream>
using namespace std;
bool isPrime(int n) 
{
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) 
    {
        if (n % i == 0) return false;
    }
    return true;
}
bool isEmirp(int n) 
{
    if (!isPrime(n)) return false;
    
    int reversed = 0, original = n;
    while (n > 0) 
    {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return original != reversed && isPrime(reversed);
}
int main() 
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isEmirp(num)) 
    {
        cout << num << " yes, the given number is Emirp number." << endl;
    } 
    else 
    {
        cout << num << " No, the given number is not an Emirp number." << endl;
    }

    return 0;
}