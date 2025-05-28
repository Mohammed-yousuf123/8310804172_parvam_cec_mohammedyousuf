/*create a class base with a protected variable, Derive a class Derived and use the protected variable in a public function*/
#include <iostream>
using namespace std;
class Base 
{
    protected:
        int protectedVar;

    public:
        Base(int value) : protectedVar(value) {}
};
class Derived : public Base 
{
    public:
        Derived(int value) : Base(value) {}

        void display() 
        {
            cout << "Protected Variable: " << protectedVar << endl;
        }
};
int main() 
{
    Derived d(18);
    d.display();
    return 0;
}