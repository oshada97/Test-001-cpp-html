#include <iostream>

using namespace std;

int add (int num1, int num2);

int main (){
	
	int answer = add(50,7);
	
	cout<<answer<<endl;
	
	return 0;
	
}

int add (int num1, int num2){
	
	int answer=num1+num2;
	
	return answer;
	
}

