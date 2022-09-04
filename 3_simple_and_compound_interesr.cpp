#include<iostream>
#include<math.h>
using namespace std;
int main()
//simple and compound interest
{
	double principle , rate , time ;
 
 	cout<<"Enter amount(p , r , t)"<<endl;
 	cin>>principle>>rate>>time;
 	/*Simple Interest	*/
 	double SI = (principle*rate*time)/100;
 	cout<< "Simple Interest is " << SI<<endl;
 	
    /* Calculate compound interest */
    double A = principle * (pow((1 + rate / 100), time));
      double CI = A- principle;
 
    cout << "Compound interest is " << CI;
 
    return 0;
}
	
