#include <iostream>

using namespace std;

void sayHello(string name);

int main (){
	
	sayHello("NIMAL");
	sayHello("KAMAL");
		
	return 0;
	
}

void sayHello(string name){
	
	cout<<"HELLO "<<name<<endl;
	
}
