#include<iostream>
using namespace std;
//virtual function
class base{
	public:
		virtual void print(){
			cout<<"This is the base class"<<endl;
		}
		virtual void display(){
			cout<<"base Display"<<endl;
		}
};
class derived: public base{
	public:
		void print(){
			cout<<"This is the derived class"<<endl;
		}
		void display(){
			cout<<"Display"<<endl;
		}
};
int main(){
	base *baseptr;
	derived d;
	baseptr = &d;
	baseptr -> print();
	baseptr -> display();
	base b;
	b.display();
	return 0;
}
