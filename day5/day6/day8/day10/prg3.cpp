/*create a prg to find the number of vowels in the  string*/
#include <iostream>
using namespace std;
int main() 
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str); 
    int vowelCount = 0;
    for (char ch : str) 
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') 
        {
            vowelCount++;
        }
    }
    cout << "The number of vowels in the string is: " << vowelCount << endl;   
    return 0;
}