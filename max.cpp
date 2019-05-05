#include <iostream>

using namespace std;

int main (){
	
	int num1,num2,num3;
	
	cout<<"Insert first value ;";
	cin>>num1;
	
	cout<<"Insert second value ;";
	cin>>num2;
	
	cout<<"Insert third value ;";
	cin>>num3;
	
	if (num1,num2){
		
		if (num1<num3){
			
			cout<<"Maximum number :"<<num3<<endl;
			
		}
		
		else {
			
			cout<<"Maximum number :"<<num1<<endl;
			
		}
	}
	
	else {
		
		if (num2<num3){
			
			cout<<"Maximum number :"<<num3<<endl;
			
		}
		
		else {
			
			cout<<"Maximum number :"<<num2<<endl;
		}
	}
}
