/*find the missing numbers in an array of integers*/
#include <iostream>
#include <vector>
using namespace std;
int main() 
{
    int n, num;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> arr(n);
    
    cout << "Enter the elements of the array (0 to " << n - 1 << "): ";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }
    
    cout << "Missing numbers are: ";
    for (int i = 0; i < n; i++) 
    {
        if (find(arr.begin(), arr.end(), i) == arr.end()) 
        {
            cout << i << " ";
        }
    }
    
    cout << endl;
    return 0;
}