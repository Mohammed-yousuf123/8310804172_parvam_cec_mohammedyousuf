/*create a class employee and make three objects. store and display data for three different employees using each object from user*/
#include <iostream>
using namespace std;
class Employee 
{
    private:
        string name;
        int id;
        double salary;

    public:
        void inputData() 
        {
            cout << "Enter employee name: ";
            cin >> name;
            cout << "Enter employee ID: ";
            cin >> id;
            cout << "Enter employee salary: ";
            cin >> salary;
        }

        void displayData() 
        {
            cout << "Employee Name: " << name << endl;
            cout << "Employee ID: " << id << endl;
            cout << "Employee Salary: " << salary << endl;
        }
};
int main() 
{
    Employee emp1, emp2, emp3;

    cout << "Enter details for Employee 1:" << endl;
    emp1.inputData();
    
    cout << "Enter details for Employee 2:" << endl;
    emp2.inputData();
    
    cout << "Enter details for Employee 3:" << endl;
    emp3.inputData();

    cout << "\nEmployee 1 Details:" << endl;
    emp1.displayData();
    
    cout << "\nEmployee 2 Details:" << endl;
    emp2.displayData();
    
    cout << "\nEmployee 3 Details:" << endl;
    emp3.displayData();

    return 0;
}
  