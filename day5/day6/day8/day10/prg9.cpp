/*create a program to convert faranid to cilcious*/
#include <iostream>
using namespace std;
int main() 
{
    float faranid, cilcious;
    cout << "Enter temperature in Faranid: ";
    cin >> faranid;
    cilcious = (faranid - 32) * 5 / 9;

    cout << "Temperature in Cilcious: " << cilcious << endl;
    return 0;
}