/*sorting of array {13, 7, 6, 4, 3, 15, 18, 20}*/
#include <iostream>
using namespace std;
void sorting(int arr[], int n) 
{
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                arr[j] and arr[j+1];
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main() 
{
    int arr[] = {13, 7, 6, 4, 3, 15, 18, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    sorting(arr, n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }
    return 0;
}
