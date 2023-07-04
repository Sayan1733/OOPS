#include<iostream>
using namespace std;
//function overloading
class Functionoverloading{
	public:
		void fun(){
			cout<<"I am a function "<<endl;
		}
		void fun(int x){
			cout<<"Function with int"<<endl;
		}
		void fun(double x){
			cout<<"Function with double"<<endl;
		}
};
int main(){
	Functionoverloading a;
	a.fun();
	a.fun(3);
	a.fun(2.0);
	return 0;
}
