/**/
#include <iostream>
using namespace std;
class A
{
    protected:
    int a;
    public:
    void get_a(int n)
    {
        a = n;
    }
};
class B
{
    protected:
    int b;
    public:
    void get_b(int n)
    {
        b = n;
    }
};
class c : public A,public B
{
    public:
    void display()
    {
        std::cout<<"the value of a is : "<<a<<std::endl;
        std::cout<<"the value of b is : "<<b<<std::endl;
        cout<<"addition of a and b is : "<<a+b;
    }
};
int main()
{
    c get;
    get.get_a(10);
    get.get_b(20);
    get.display();
    return 0;
}