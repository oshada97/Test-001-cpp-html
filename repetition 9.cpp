	#include <iostream>
	
	using namespace std;
	
	int main () {
		
		int x;
		
		cout<<"Insert value :";
		cin>>x;
		
		int fact=1;
		
		while (x>0){
			
			fact=fact*x;
			
			x=x-1;
			
		}
		
		cout<<" Factorial Value = "<<fact<<endl;
		
		 return 0;
	}
