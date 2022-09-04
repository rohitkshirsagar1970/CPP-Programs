#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"enter any year"<<endl;
	cin>>year;
	if(year%4==0 || year%400==0)
	{
		cout<<"year "<<year<< " is present is in leap year"<<endl;
	}
	else
	{
		cout<<"year is not in leap year"<<endl;
	}
	return 0;
	
}

