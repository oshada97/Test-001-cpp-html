	#include <iostream>
	
	using namespace std;
	
	int main (){
		
		int marks;
		
		cout<<"Insert marks :";
		cin>>marks;
	
			if (marks>=100){
			
			cout<<"\n\tInvalid Marks";
			
		}
	
		if (marks>=75){
			
			cout<<"\n\tYour pass is A";
			
		}
		
		else if (marks>=65){
			
			cout<<"\n\tYour pass is B";
			
		}
		
		else if (marks>=50){
			
			cout<<"\n\tYour pass is C";
			
		}
		
		else if (marks>=35){
			
			cout<<"\n\tYour pass is S";
			
		}
		
		else {
			
			cout<<"\n\tYour pass is F";
			
		}
		
		return 0;
		
		if (marks>100){
			
			cout<<"\n\tInvalid Marks";
			
		}
	}
	
	
