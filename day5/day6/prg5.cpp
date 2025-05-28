/*find a area of rectangle and triangle using  class*/
#include <iostream>
using namespace std;
class Shape 
{
    public:
    virtual float area() = 0;
};
class Rectangle : public Shape 
{
    private:
    float length, width;
    public:
    Rectangle(float l, float w) : length(l), width(w) {}
    float area() override 
    {
        return length * width;
    }
};
class Triangle : public Shape 
{
    private:
    float base, height;
    public:
    Triangle(float b, float h) : base(b), height(h) {}
    float area() override 
    {
        return 0.5 * base * height;
    }
};
int main() 
{
    float length, width, base, height;
    
    cout << "Enter length and width of rectangle: ";
    cin >> length >> width;
    Rectangle rect(length, width);
    cout << "Area of rectangle: " << rect.area() << endl;

    cout << "Enter base and height of triangle: ";
    cin >> base >> height;
    Triangle tri(base, height);
    cout << "Area of triangle: " << tri.area() << endl;

    return 0;
}