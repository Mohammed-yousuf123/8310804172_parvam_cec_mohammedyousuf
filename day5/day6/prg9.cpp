/*create a class rectangle with private members length and width.add a public function to set values and displaying the area*/
#include <iostream>
using namespace std;
class rectangle
{
    private:
        int length;
        int width;
        
    public:
        void set_values(int l, int w)
        {
            length = l;
            width = w;
        }

        int area()
        {
            return length * width;
        }

        void display()
        {
            cout << "Length: " << length << endl;
            cout << "Width: " << width << endl;
            cout << "Area: " << area() << endl;
        }
};
int main()
{
    rectangle r;
    int l, w;
    cout << "Enter length and width of the rectangle: ";
    cin >> l >> w;
    r.set_values(l, w);
    r.display();
    return 0;
}