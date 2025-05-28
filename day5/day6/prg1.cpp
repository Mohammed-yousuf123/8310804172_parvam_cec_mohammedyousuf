/*calculate the total and average of element in array*/
#include<iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    float avg;
    cout << "enter the numbert of elements:";
    cin >> n;
    int arr[n];
    cout << "enter"<<n<<" elements:" << endl;
    for (int i =0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    avg = static_cast<float>(sum) /n;
    cout << "sum: " << sum << endl;
    cout << "average: " << avg << endl;
    return 0;
}