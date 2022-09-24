
#include<iostream>
#include<conio.h>
using namespace std;
class bank_management{
	private:
		char name[50],address[100],a;
		int aadhar_number,mobile_number,money,withdraw,balance;
	public:
		void create_account(){
			cout<<"\n\tEnter Your full Name :- ";
			cin.ignore();
			cin.getline(name,50);
			cout<<"\tEnter Your Address :- ";
			cin.ignore();
			cin.getline(address,100);
			cout<<"\tEnter Your Mobile Number :- ";
			cin.ignore();
			cin>>mobile_number;
			cout<<"\tEnter Your Aadhar Number :- ";
			cin.ignore();
			cin>>aadhar_number;
			cout<<"\tType of your Account Saving(s) or Current(c) :-";
			cin.ignore();
			cin>>a;
			cout<<"\tEnter amount for deposite :- ";
			cin.ignore();
			cin>>balance;
			cout<<"\n\t...Your account has been created...\n";
		}
		void deposite_money(){
			cout<<"\n\tEnter Amount :- ";
			cin>>money;
			balance = balance + money;
			cout<<"\tYour Total Balance :- "<<balance;
			cout<<"\n\n\t...Sucessful...\n";
		}
		void withdraw_money(){
			cout<<"\n\tEnter Amount :- ";
			cin>>withdraw;
			balance = balance - withdraw;
			cout<<"\tYour Total Balance :- "<<balance;
			cout<<"\n\n\t...Successful...\n";
		}
		void display_account(){
			cout<<"\n\tYour full Name :- "<<name;
			cout<<"\n\tYour Address :- "<<address;
			cout<<"\n\tYour Mobile Number :- "<<mobile_number;
			cout<<"\n\tYour Aadhar Number :- "<<aadhar_number;
			cout<<"\n\tYour Total Balance :- "<<balance;
			cout<<"\n\t...Thankyou !!...\n";
		}
};
int main(){
	int c,x;
	bank_management b;
	do{
	cout<<"\n\t1- Create an Account\n";
	cout<<"\t2- Deposite Money \n";
	cout<<"\t3- Withdraw Money \n";
	cout<<"\t4- Display Account \n";
	cout<<"\t5- Exit\n";
	cout<<"\n\t...Enter your choice from above option...\n";
	cin>>c;
	switch(c)
	{
		case 1: cout<<"\n\t1- Create an Account\n";
		b.create_account();
		break;
		case 2: cout<<"\n\t2- Deposite Money \n";
		b.deposite_money();
		break;
		case 3: cout<<"\n\t3- Withdraw Money \n";
		b.withdraw_money();
		break;
		case 4: cout<<"\n\t4- Display Account \n";
		b.display_account();
		break;
		case 5: exit(1);
		default: 
		cout<<"\t...Try again... \n";
	}
	cout<<"\n\tDo you want to select next option press Y/y";
	cout<<"\n\tif you want to exit press N/n\n";
	x=getch();
	if(x=='n'||x=='N')
	exit(0);	
	}while(x=='y'||x=='Y');
	return 0;
}
