/*an autobiographical number is a number that discribes itself in terms of the count of its digits*/
#include <iostream>
using namespace std;
int main() 
{
    int n, digitCount[10] = {0}, temp, digit;
    cout << "Enter any number: ";
    cin >> n;
    temp = n;
    while (temp > 0) 
    {
        digit = temp % 10;
        digitCount[digit]++;
        temp /= 10; 
    }
    bool isAutobiographical = true;
    temp = n;
    int position = 0;
    while (temp > 0) 
    {
        digit = temp % 10;
        if (digitCount[position] != digit) 
        {
            isAutobiographical = false;
            break;
        }
        position++;
        temp /= 10;  
    }
    if (isAutobiographical) 
    {
        cout << "Yes, it is an autobiographical number: " << n << endl;
    } 
    else 
    {
        cout << "No, it is not an autobiographical number: " << n << endl;
    }
    return 0;
}