#include<iostream>
using namespace std;

int main()
{
	int arr[20],num,i,k;
	cout<<"enter size of an element "<<endl;
	cin>>num;
	
	for(i=0;i<num;i++)
	{
		cin>>arr[i];
	}
		
	
	
  k=arr[0];

	for(i=1;i<num;i++)
	
	{
		
		if(k>arr[i])
		{
			k=arr[i];
		}
			
	}
	cout<<"largest is"<<k;
	return 0;
	
}
