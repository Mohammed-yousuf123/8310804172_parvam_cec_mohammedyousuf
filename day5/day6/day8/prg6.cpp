/*sphenic number can be checked by fact that every sphenic number will have exactly 8 divisor*/
#include <iostream>
using namespace std;
int main()
{
    int n, count = 0;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 8)
    {
        cout << " is a sphenic number."<< n << endl;
    }
    else
    {
        cout << " is not a sphenic number." << n << endl;
    }
    return 0;
}