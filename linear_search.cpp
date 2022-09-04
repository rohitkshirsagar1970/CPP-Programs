#include<iostream>
using namespace std;

int main(){
	
	
	int arr[] = {1 , 5, 3, 4, 6 , 7};
	int target= 5;
	
	for(int i =0;i<6;i++){
		if(arr[i]==target){
			cout<<target<<" starting index : "<<i<<endl;
			break;
		}
	}

	for(int i =5;i>=0;i--){
		if(arr[i]==target){
			cout<<target<<" end index : "<<i<<endl;
			break;
		}
	}	
	
	return 0;
}
