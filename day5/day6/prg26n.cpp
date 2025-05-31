#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string text;
    ifstream MyFile("C:\\yousuf\\training\\tecnical\\DSA\\Sample.txt");
    getline(MyFile, text);
    cout<<text;
    MyFile.close();
    return 0;
}