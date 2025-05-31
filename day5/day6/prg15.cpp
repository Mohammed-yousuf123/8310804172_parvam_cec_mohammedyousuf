/**/
#include <iostream>
using namespace std;
int main()
{
    string var1="students";
    string *p;
    p=&var1;
    cout << "value of p variable is: " << *p << endl;
    return 0;
}