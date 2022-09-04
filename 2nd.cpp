#include<iostream>
using namespace std;
int main()
{
 int s1,s2,s3,s4,s5;
 float per;
 
 cout<<"Enter your marks" << endl;
 cin>>s1>>s2>>s3>>s4>>s5;
 int sum =s1+s2+s3+s4+s5;
 
 float marks = sum*100;
 per = marks/500;
 
 cout<<marks;
 return 0; 
}

