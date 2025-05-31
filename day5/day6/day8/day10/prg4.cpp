/*create a string to remove the duplicates*/
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;
int main() 
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str); 

    unordered_set<char> seen;
    string result;

    for (char ch : str) 
    {
        if (seen.find(ch) == seen.end()) 
        {
            seen.insert(ch);
            result += ch;
        }
    }

    cout << "String after removing duplicates: " << result << endl;   
    return 0;
}