#include <iostream>

using namespace std;

int main (){
	
	int num;
	
	cout<<"Insert number :";
	cin>>num;
	
	if (num<100){
		
		cout<<num<<" is less than 100";
		
	}
	
	else if (num<1000){
			
			cout<<num<<" is between 100 and 1000";
			
		}
		
	else {
			
			cout<<num<<" is more than 1000";
		}
	
	return 0;
	
}
