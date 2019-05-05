# include <iostream>
using namespace std;
int main () {
	
	
	double sin;
	double math;
	double eng;
	double sci;
	double avg;
	
	cout<<"Insert marks"<<endl;
	cout<<"Sinhala = ";
	cin>>sin;
	cout<<"Maths = ";
	cin>>math;
	cout<<"English = ";
	cin>>eng;
	cout<<"Science = ";
	cin>>sci;
	
	avg=(sin+math+eng+sci)/4;
	cout<<"Average = "<<avg<<endl;
	
	if(avg>50){
		
		cout<<"pass"<<endl;
	}
	else {
		cout<<"fail"<<endl;
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}
