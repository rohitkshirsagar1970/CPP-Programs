#include<iostream>
using namespace std;
int main()
{
	int month ,day;
	cout<<"enter your month number"<<endl;
	cin>>month;

	if(month==1||month==3||month==5||month==7||month==8||month==10||month==12||month==14)
	{
		day=31;
	}
	else if(month==2)
	{
		day=28;
	}
	else
	{
		day=30;
	}
	
	switch(month)
	{
		case 1:
			cout<<"January "<<day<<endl;
		default:
			cout<<"Enter Correct month"<<endl;
	}
			
return 0;	
}


	  
		
	

