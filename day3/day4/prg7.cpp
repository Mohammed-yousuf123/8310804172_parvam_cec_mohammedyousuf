/*using switch statement calculate simple intrest or compount intrest or both simple and compound*/
#include<iostream>
using namespace std;
int main()
{
	int choice;
	float p,r,t,simple,compound;
	cout<<"Enter the principal amount: ";
	cin>>p;
	cout<<"Enter the rate of intrest: ";
	cin>>r;
	cout<<"Enter the time: ";
	cin>>t;
	cout<<"Enter 1 for simple intrest or 2 for compound intrest or 3 for both: ";
	cin>>choice;
	switch(choice)
	{
		case 1:
			simple=(p*r*t)/100;
			cout<<"Simple intrest is: "<<simple<<endl;
			break;
		case 2:
			compound=p*pow((1+r/100),t);
			cout<<"Compound intrest is: "<<compound<<endl;
			break;
		case 3:
			simple=(p*r*t)/100;
			compound=p*pow((1+r/100),t);
			cout<<"Simple intrest is: "<<simple<<endl;
			cout<<"Compound intrest is: "<<compound<<endl;
			break;
		default:
	}
}