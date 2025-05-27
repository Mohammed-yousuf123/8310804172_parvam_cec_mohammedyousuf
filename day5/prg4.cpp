/*array of multiplying two numbers using two dimentional array*/
#include <iostream>
using namespace std;   
int main() 
{
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;
    int arr1[rows][cols], arr2[rows][cols], product[rows][cols];
    cout << "Enter elements for first array:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++) 
        {
            cin >> arr1[i][j];
        }
    }
    cout << "Enter elements for second array:\n";
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            cin >> arr2[i][j];
        }
    }
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            product[i][j] = arr1[i][j] * arr2[i][j];
        }
    }
    cout << "Product of the two arrays is:\n";
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            cout << product[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}