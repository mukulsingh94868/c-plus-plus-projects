#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

class bank{
	public:
		char name[100], add[100], y;
		int balance;
		void open_account();
		void deposite_money();
		void withdraw_money();
		void display_account();
};
void bank :: open_account(){
	cout<<"Enter your Name: \n";
	cin.ignore();
	cin.getline(name, 100);
	cout<<"Enter your address: \n";
	cin.ignore();
	cin.getline(add,100);
	cout<<"What type of account you want to open saving account (s) or current account (c) \n:";
	cin>>y;
	cout<<"Enter amount of Deposite: \n";
	cin>>balance;
	cout<<"Your account is created \n";
	
}
void bank :: deposite_money(){
	int a;
	cout<<"Enter how much you deposite: \n";
	cin>>a;
	balance = balance + a;
	cout<<" Total amount you deposite: \t"<<balance;
}
void bank :: display_account(){
	cout<<"Your Full Name: \t"<<name;
	cout<<"Your address: \t"<<add;
	cout<<"Type of account that you open : \t"<<y;
	cout<<"Amount you deposite : \t"<<balance;
}
void bank :: withdraw_money(){
	float amount;
	cout<<"\n withdraw:";
	cout<<"Enter amount to withdraw:";
	cin>>amount;
	balance = balance - amount;
	cout<<"now total amount is left: "<<balance;
	
}


int main(){
	int ch,x;
	bank obj;
	do{
	
	
	cout<<"1) Open Account \n";
	cout<<"2) Deposite Money \n";
	cout<<"3) Withdraw Money \n";
	cout<<"4) Display Account\n";
	cout<<"5) Exit \n";
	cout<<"Select the option from above \n";
	cin>>ch;
	switch(ch){
		case 1:
		cout<<"1) Open Account \n";
		obj.open_account();
		break;
		case 2:
		cout<<"2) Deposite Money \n";
		obj.deposite_money();
		break;
		case 3:
		cout<<"3) Withdraw Money \n";
		obj.withdraw_money();
		break;
		case 4:
		cout<<"4) Display Account \n";
		obj.display_account();
		break;
		case 5:
			if(ch==5){
				exit(1);
			}
	default:
	        cout<<"This is not exit please try again later \n";
}
	cout<<"\n do you want to select next option then press :: y \n";
	cout<<"if you want to exit then press :: N";
	x = getch();
	if (x=='n' || x=='N')
	exit(0);
} while(x=='y' || x=='Y');
getch();
return 0;
	
}
