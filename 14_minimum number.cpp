#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter three number"<<endl;
	cin>>a>>b>>c;
	if(a<b)
	{
		if(a<c)
		{
			cout<<"a is mini"<<endl;
		}
		else
		{
			cout<<"c is mini"<<endl;
		}
	}
	else if(b<c)
	{
		cout<<"b is mini"<<endl;
	}
	else
	{
		cout<<"c is mini"<<endl;
	}
	return 0;
	
	
}
