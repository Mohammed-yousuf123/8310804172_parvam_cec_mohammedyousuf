/*pointers*/
#include <iostream>
using namespace std;
int main()
{
    int number=30;
    int *p;
    p=&number; 
    cout << "address of number variable is: " << &number << endl;
    cout << "address of p variable is: " << p << endl;
    cout << "value of p variable is: " << *p << endl;
    return 0;
}