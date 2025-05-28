/**/
#include <iostream>
using namespace std;
class A
{
    protected:
    int a;
    public:
    void get_a()
    {
        std::cout << "enter the value of 'a' : "<< std::endl;
        cin >> a;
    }
};
class B : public A
{
    protected:
    int b;
    public:
    void get_b()
    {
        std::cout << "enter the value of 'b' : "<< std::endl;
        cin >> b;
    }
};
class C
{
    protected:
    int c;
    public:
    void get_c()
    {
        std::cout << "enter the value of c is : "<< std::endl;
        cin >> c;
    }
};
class D : public B, public C
{
    protected:
    int d;
    public:
    void mul() 
    {
        get_a();
        get_b();
        get_c();
        std::cout << "multiplication of a, b and c is : " << a * b * c << std::endl;
    }
};
int main()
{
    D d1;
    d1.mul();
    return 0;
}