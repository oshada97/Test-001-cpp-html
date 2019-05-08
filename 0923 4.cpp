#include <iostream>

using namespace std;

int add (int num1, int num2);

int main (){
	
	int answer = add(5,7);
	
	cout<<answer<<endl;
	
	return 0;
	
}

int add (int num1, int num2){
	
	int ans=num1+num2;
	
	return ans;
	
}


