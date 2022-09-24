#include<iostream>
using namespace std;
class person
{
char name[50];
char address[100];
int age;
float salary;
public:
inline void getdata(void)
{
cout<<"Enter name: ";
cin.getline(name, 50);
cout<<"Enter Address :";
cin.getline(address, 100);
cout<<"Enter Age :";
cin>>age;
cout<<"Enter Salary :";
cin>>salary;
}
inline void display(void)
{
cout<<"\n name:"<<name;
cout<<"\n address:"<<address;
cout<<"\n age:"<<age;
cout<<"\n salary:"<<salary;	
}
};
int main( )
{
person p;
p.getdata();
p.display();
return(0);
}

