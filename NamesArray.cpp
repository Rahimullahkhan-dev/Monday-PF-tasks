#include <iostream>
using namespace std;

int main(){
	string name[3];
	
	cout <<"Enter your Name:"<<endl;
	for (int i=0;i<3;i++){
		cout <<"name "<<i+1<<": ";
		getline(cin,name[i]);
	}
	cout <<"\n Displaying name:"<<endl;
	for (int i=0;i<3;i++){
		cout <<"index "<<i<<": "<<name[i]<<endl;
	}
	
	
	
	
	return 0;
}