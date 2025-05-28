/**/
#include<iostream>
using namespace std;
class person
{
    public:
    string name;
    int age;
    void display()
    {
        cout << "Name:" << name << endl;
        cout << "Age:" << age << endl;
    }
};
int main()
{
    person p;
    p.name = "yousuf";
    p.age = 20;
    p.display();
    return 0;
}