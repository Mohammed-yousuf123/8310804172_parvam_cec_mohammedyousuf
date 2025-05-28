/*create a rectangle by using class*/
#include <iostream>
using namespace std;
class rectangle
{
    public:
    int length, width;
    rectangle(int l, int w) 
    {
        length = l;
        width = w;
    }
    int area() 
    {
        return length * width;
    }
    int perimeter() 
    {
        return 2 * (length + width);
    }
};
int main() 
{
    int l, w;
    cout << "Enter length and width of rectangle: ";
    cin >> l >> w;
    rectangle rect(l, w);
    cout << "Area of rectangle: " << rect.area() << endl;
    cout << "Perimeter of rectangle: " << rect.perimeter() << endl;
    return 0;
}