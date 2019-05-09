#include <iostream>

using namespace std;

int main (){
	
	int num1,num2,num3,max;
	
	cout<<"Insert first value ;";
	cin>>num1;
	
	cout<<"Insert second value ;";
	cin>>num2;
	
	cout<<"Insert third value ;";
	cin>>num3;
	
	if (num1>num2){
		
		max=num1;
	}
	
	else {
		
		max=num2;
	}
	
	if (num3>max){
		
		max=num3;
		
	}
	
	cout<<"Maximum :"<<max;
		
	return 0;
	
}
