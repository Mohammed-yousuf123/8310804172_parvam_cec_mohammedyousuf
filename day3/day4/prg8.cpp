/*create a simple calculater using switch*/
#include<iostream>
using namespace std;
int main()
{
    char op:
    float num1,num2,result;
    cout<<"enter operator(+,-,*,/):";
    cin>>op;
    cout<<"enter two operands:";
    cin>>num1>>num2;
    switch(op)
    {
        case '+':
            result=num1+num2;
            cout<<num1<<'+'<<num2<< '='<<result<<endl;
            break;
        case '-':
            result=num1-num2;
            cout<<num1<<'-'<<num2<< '='<<result<<endl;
            break;
        case '*':
            result=num1*num2;
            cout<<num1<<'*'<<num2<< '='<<result<<endl;
            break;
        case '/':
            result=num1/num2;
            cout<<num1<<'-'<<num2<< '='<<result<<endl;
            break;
        default:
            cout<<"invalid operator!"<<endl;
            break;
    }
    return 0;
}