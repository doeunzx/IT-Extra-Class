#include<iostream>
#include<iomanip>
using namespace std;

void my_infor(),my_infor2();;


int main(){
	my_infor();
	my_infor2();

return 0;
}
void my_infor(){
	
	string name="Vet Sidoeun",pob="Battambang",job="Student",color="Yellow",food="Char Krueng Morn",free_time="Study";
	int age=20,id=123,dob;
	cout<<"===>This is my information<====\n"<<endl;
	 cout<<"Full Name      :"<<name<<endl;
	 cout<<"ID             :"<<id<<endl;
	 cout<<"Age            :"<<age<<endl;
	 cout<<"Date of birth  :"<<dob<<"13/06"<<endl;
	 cout<<"Place of birth :"<<pob<<endl;
	 cout<<"Job            :"<<job<<endl;
	 cout<<"Favortive Color:"<<color<<endl;
	 cout<<"Favorite food  :"<<food<<endl;
	 cout<<"Free Time      :"<<free_time<<endl;
	 cout<<"\n"<<endl;
}
void my_infor2(){
	string name,pob,job,color,food,free_time,dob;
	int age,id;
	cout<<"===>Input your Information<===\n"<<endl;
	cout<<"1.Full Name"<< setw(7) << ":";getline(cin,name);
	cout<<"2.ID" << setw(14) << ":";cin>>id;
	cout<<"3.Age"<<setw(13)<<":";cin>>age;
	cout<<"4.Date of birth"<<setw(3)<<":";cin.ignore();getline(cin,dob);
	cout<<"5.Place of birth"<<setw(2)<<":";getline(cin,pob);
	cout<<"6.Job"<<setw(13)<<":";getline(cin,job);
	cout<<"7.Favorite Color"<<setw(2)<<":";getline(cin,color);
	cout<<"8.Favorite Food"<<setw(3)<<":";getline(cin,food);
	cout<<"9.Free Time"<<setw(7)<<":";getline(cin,free_time);
	cout<<endl;
	
	cout<<"===>Your Information ere<===\n"<<endl;
	
	cout<<"1.Full Name"<<setw(7)<<":"<<name<<endl;
	cout<<"2.ID"<<setw(14)<<":"<<id<<endl;
	cout<<"3.Age"<<setw(13)<<":"<<age<<endl;
	cout<<"4.Date of Birth"<<setw(3)<<":"<<dob<<endl;
	cout<<"5.Place of Birth"<<setw(2)<<":"<<pob<<endl;
	cout<<"6.Job"<<setw(13)<<":"<<job<<endl;
	cout<<"7.Favorite Color"<<setw(2)<<":"<<color<<endl;
	cout<<"8.Favorite Food"<<setw(3)<<":"<<food<<endl;
	cout<<"9.Free Time"<<setw(7)<<":"<<free_time<<endl;
}
