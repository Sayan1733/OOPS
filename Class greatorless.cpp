#include<iostream>
using namespace std;
class greatorless{
	int a,b,c;
	public:
		void input(void);
		void output(void);
};
void greatorless::input(void){
	cout<<"Enter The First Number:";
	cin>>a;
	cout<<"Enter The Second Number:";
	cin>>b;
	cout<<"Enter The Third Number:";
	cin>>c;
} 
void greatorless::output(void){
	if(a>b && b>c){
		cout<<"The Greatest Number Is: "<<a;
		cout<<"\nThe Least Number Is: "<<c;
	}
	else if(b>a && a>c){
		cout<<"The Greatest Number Is: "<<b;
		cout<<"\nThe Least Number Is: "<<c;
	}
	else{
		cout<<"The Greatest Number Is: "<<c;
		if(a<c && a<b){
			cout<<"\nThe Least Number Is: "<<a;
		}
		else
			cout<<"\nThe Least Number Is: "<<b;
	}
}
int main(){
	greatorless g;
	g.input();
	g.output();
	return 0;
}
