#include <iostream> 

using namespace std;

int main(){
	
	for (int a=1;a<9;a++){
		if(a==5){
		break;	
		}cout<<a<<endl;	
	}
	cout<<"..............."<<endl;
	for(int a=1;a<9;a++){
		if(a==5){
		continue;	
		}
		cout<<a<<endl;
	}
	
	
	
return 0;	
}
