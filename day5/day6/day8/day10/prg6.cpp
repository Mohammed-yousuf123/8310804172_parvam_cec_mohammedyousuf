/*create the paladrome by using string*/
#include <iostream>
using namespace std;
int main() 
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    string reversedStr;
    for (int i = str.length() - 1; i >= 0; i--)
    {
        reversedStr += str[i];
    }
    if (str == reversedStr)
    {
        cout << "The string is a palindrome." << endl;
    }
    else
    {
        cout << "The string is not a palindrome." << endl;
    }
    return 0;
}