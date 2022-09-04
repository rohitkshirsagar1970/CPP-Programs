#include<iostream>
using namespace std;
int main()
//calculate the sum of marks in five subjects and percentage of marks obtained.
{
	int s1,s2,s3,s4,s5,sum;
	float per;
	cout<<"enter your subject marks"<<endl;
	cin>>s1>>s2>>s3>>s4>>s5;
	sum=s1+s2+s3+s4+s5;
	per=(sum/5);
	cout<<"sum of marks in five subjects is"<<sum<<"percentage of marks obtained is"<<per<<endl;
	return 0;	
}
