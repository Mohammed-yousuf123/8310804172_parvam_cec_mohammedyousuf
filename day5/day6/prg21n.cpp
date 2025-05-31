/*to check the age is below or above 18*/
#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age"<< endl;
    cin >> age;
    try
    {
        if(age < 18)
        throw(age);
        else
        cout <<"access given";
    }
    catch(int a)
    {
        cout <<"access denied: Minimum age must be 18, but your age is" <<a;
    }
    return 0;
}