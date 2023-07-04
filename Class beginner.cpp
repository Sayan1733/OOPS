#include<iostream>
using namespace std;
class person{
	char first_name[30],last_name[30];
	int age;
	public:
		void getdata(void);
		void display(void);
};
void person::getdata(void)
{
	cout<<"Enter First Name:";
	cin>>first_name;
	cout<<"Enter Last Name:";
	cin>>last_name;
	cout<<"Enter The Age:";
	cin>>age;
}
void person::display(void){
	cout<<"\nName: "<<first_name<<" "<<last_name;
	cout<<"\nAge: "<<age;
}
int main(){
	person P;
	P.getdata();
	P.display();
	return 0;
}
