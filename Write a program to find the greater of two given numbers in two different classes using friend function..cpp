#include<iostream>
using namespace std;

class one; // forward declaration
class two; // forward declaration

class one
{
int a;
public:
void input() 
{
cout << "Enter the value of a:";
cin >> a;
 }
friend int cal(one a,two b);

};
class two
{
int b;
public:
void input() 
{
cout << "Enter the value of b:";
cin >> b;
}
friend int cal(one a,two b);
};
int cal(one x,two y)
{
return (x.a>y.b)?x.a:y.b; // conditional operator to calculate largest between two numbers
}

int main()
{
  one x;
  x.input();
  two y;
   y.input();
   cout << cal(x,y);
   return 0;
}

