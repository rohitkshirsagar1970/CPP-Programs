#include<iostream>
using namespace std;
int main()
{
	int a,b,temp;
	cout<<"enter two numbers before swapping "<<endl;
	cin>>a>>b;
	cout<<"a "<< a << "\nb "<< b;
	temp=a;
	a=b;
	b=temp;
	cout<<"\nafter swapping "<<endl;
	cout<<"a "<< a << "\nb "<< b<<endl;
	return 0;
	
	
}
