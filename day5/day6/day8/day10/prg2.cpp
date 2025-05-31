/*create a prg to find the length of the string*/
#include <iostream>
using namespace std;
int main() 
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str); 
    int length = 0;
    for (char ch : str)
    {
        length++;
    }
    cout << "The length of the string is: " << length << endl;
    return 0;
}