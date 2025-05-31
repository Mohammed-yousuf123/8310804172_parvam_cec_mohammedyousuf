/*create a class circle with a private radius and public fumctions to input the radius and calculate the area*/
#include <iostream>
using namespace std;
class Circle 
{
    private:
        double radius;

    public:
        void inputRadius() 
        {
            cout << "Enter the radius of the circle: ";
            cin >> radius;
        }

        double calculateArea() 
        {
            return 3.14159 * radius * radius; 
        }
};
int main() 
{
    Circle c;
    c.inputRadius();
    double area = c.calculateArea();
    cout << "The area of the circle is: " << area << endl;
    return 0;
}