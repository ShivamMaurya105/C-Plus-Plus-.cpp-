#include<iostream.h>
using namespace std;
void friend()
{
int a,b,c;
cout<<"enter two numbers to be add";
cin>>a;
cin>>b;
c=a+b;
cout<<"the value is"<<c;
}
int main()
{ friend();
return 0;
}
