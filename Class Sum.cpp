#include<iostream>
using namespace std;
class add{
	int a,b;
	
	public:
		void getdata(void);
		void display(void);
};
void add::getdata(void){
	cout<<"Enter The Number1:";
	cin>>a;
	cout<<"Enter The Number2:";
	cin>>b;
}
void add::display(void){
	int c=a+b;
	cout<<"\nThe Result is: "<<c;
}
int main(){
	add a;
	a.getdata();
	a.display();
	return 0;
}
