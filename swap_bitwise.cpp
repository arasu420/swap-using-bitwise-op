#include <iostream>
using namespace std;
int  main()
{
	int num1,num2;
	cout<<"enter 1st num";
	cin>>num1;
	cout<<"enter 2st num";
	cin>>num2;
	num1=num1^num2;
	num2=num1^num2;
	num1=num1^num2;
	cout<<"num1:"<<num1<<"\n"<<"num2:"<<num2;
	return 0;
}
