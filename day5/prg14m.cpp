/**/
#include <iostream>
using namespace std;
class Animal {
    public:
    void eat()
    {
        cout<<"Eating..."<<endl;
    }
};
class Dog : public Animal 
{
 public:
    void bark()
    {
        cout<<"Barking...";
    }
};
class Cat: public Animal
{
 public:
    void meo()
    {
        cout<<"meo meo"<<endl;
    }
int main(void)
{
    Dog d1; cat c1;
    d1.eat();
    d1.bark();
    c1.eat();
    c1.meo();
    return 0; 
}
}   