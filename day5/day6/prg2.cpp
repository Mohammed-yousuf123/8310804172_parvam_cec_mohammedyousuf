#include<iostream>
using namespace std;
class employee
{
    public:
    employee()
    {
        cout << "defult constructor invoked" << endl;
    }
    ~employee()
    {
        cout << "destructor envoked" << endl;
    }
};
int main(void)
{
    cout << "in main func\n";
    cout << "1st object\n";
    employee e1;
    cout << "2nd object\n";
    employee e2;
    cout << "ending main func\n";
    return 0;
}
