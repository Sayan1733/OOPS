#include<iostream>
using namespace std;
class car{
	char car_name[30],type[30];
	int price;
	public:
		void getdata(void);
		void display(void);
};
void car::getdata(void){
	cout<<"Enter The Car Name:";
	cin>>car_name;
	cout<<"Enter The Type Of Car:";
	cin>>type;
	cout<<"Enter The Price:";
	cin>>price;
}
void car::display(void){
	cout<<"\nCar Name: "<<car_name;
	cout<<"\nType Of Car: "<<type;
	cout<<"\nThe Price of Car:"<<price;
}
int main(){
	car C;
	car C1;
	C.getdata();
	C.display();
	cout<<"\n";
	C1.getdata();
	C1.display();
	return 0;
}
