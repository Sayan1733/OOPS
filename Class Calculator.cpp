#include <iostream>
using namespace std;
class calculator{
	float a,b;
	char c;
	public:
		void input(void);
		void output(void);
};
void calculator::input(void){
	cout<<"Enter The First Number:";
	cin>>a;
	cout<<"Enter The Operrator:";
	cin>>c;
	cout<<"Enter The Second Number:";
	cin>>b;
	
}
void calculator::output(void){
	float r;
	switch(c){
		case '+':
			r=a+b;
			cout<<"\nThe Result is: "<<r;
			break;
		case '-':
			r=a-b;
			cout<<"\nThe Result is: "<<r;
			break;
		case '*':
		case 'x':
			r=a*b;
			cout<<"\nThe Result is: "<<r;
			break;
		case '/':
			r=a/b;
			cout<<"\nThe Result is: "<<r;
			break;
		default:
			cout<<"\nEntered input is wrong!";
			break;
	}
	
}
int main(){
	calculator c;
	c.input();
	c.output();
	return 0;
}
