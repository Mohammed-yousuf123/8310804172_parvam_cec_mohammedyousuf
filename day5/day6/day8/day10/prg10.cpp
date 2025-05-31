/*create a program to convert calcious to faranid using swetch statment*/
#include <iostream>
using namespace std;
int main() 
{
    float celsius, fahrenheit;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    switch (static_cast<int>(celsius)) {
        case 0:
            fahrenheit = (celsius * 9 / 5) + 32;
            break;
        case 100:
            fahrenheit = (celsius * 9 / 5) + 32;
            break;
        default:
            fahrenheit = (celsius * 9 / 5) + 32;
            break;
    }

    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
    return 0;
}