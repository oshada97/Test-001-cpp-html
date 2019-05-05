#include<iostream>
using namespace std;
int main () {
	
	int mul;
	
	
	for (int a=1;a<13;a++){
		
		cout<<"\n\n\tbefore inner loop , a = "<<a<<endl;
		
		for (int b=1;b<13;b++){
			
			
			mul = a*b;
			
			cout<<"\ta = "<<a<<", b = "<<b<<" ,   mul = "<<a<<"*"<<b<<" = "<<mul<<endl;
		}
		cout<<"\tafter inner loop , a = "<<a<<endl;
		
}
	
	
	
	
	
	
	
	
	
	return 0;
}
