/*create a program to check the given charector is vowle or not*/
#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a charector:";
    cin >> ch;
    if(ch == 'a' || ch =='e'|| ch == 'i' || ch == 'o' || ch == 'u' ||
      ch == 'A' || ch =='E'|| ch == 'I' || ch == 'O' || ch == 'U')
    {
        cout << "The charector '" << ch << "' is a vowel." << endl;
    }
    else
    {
        cout << "The charector '" << ch << "' is not a vowel." << endl;
    }
    return 0;
}