#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"enter any character"<<endl;
	cin>>ch;
	if(ch>=65 && ch<=90)
	{
		cout<<"it is in uppercase"<<endl;
		
	}
	else if (ch>=97 && ch<=122)
	{
		cout<<"it is in lower case"<<endl;
	}
	else
	{
		cout<<"invalid character"<<endl;
	}
	return 0;
}
	
