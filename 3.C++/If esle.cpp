#include<iostream>
using namespace std; 
int main( ) {
	
	
	
	int num;
	
	cout<<"1.Input an interger number";cin>>num;
		do {
			
		
	
	if(num>0){
		cout<<"Possitive Number is:"<<num<<endl;
	}
	else if (num<0){
		cout<<"Negative Number is"<<num<<endl;
	}
	
	else {
		cout<<"This is zero Number"<<endl;
	}
	} while (num !=2);
	
	return 0;
}
