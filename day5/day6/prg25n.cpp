#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream MyFile("C:\\yousuf\\training\\tecnical\\DSA\\Sample.txt");
    MyFile<<"Hello World"<<endl;
    MyFile<<"Hope you are fine"<<endl;
    MyFile.close();
    return 0;
}