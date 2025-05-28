/*create a class student that takes name and roll number as constructor parameters and display them using a function*/
#include <iostream>
using namespace std;
class student
{
   public:
        student(string n, int r) : name(n), roll_number(r) {}
       
         void display()
        {
            cout << "Name: " << name<< endl;
            cout << "Roll Number: " << roll_number << endl;
        }
};
int main()
{
    string name;
    int roll_number;

    cout << "Enter name and roll number of the student: ";
    cin >> name >> roll_number;

    student s(name, roll_number);
    s.display();

    return 0;
}