#include<iostream>
#include<math.h>
using namespace std;
double power(double m,int n=2)
{
double t;
t=pow(m,n);
return t;
}

int main()
{
    double num,ans;
    int p,ch;
    cout << "Enter the number: " ;
    cin >> num;
    cout << "Enter 1 to enter the value of power or 0 to use default value for power: ";
    cin >> ch;
    if(ch==0)
    {
    ans=power(num);
    cout<< "\n Power of "<<num<<" using default value for power is "<<ans;
    }
    else
    {
    cout << "Enter the value of power: ";
    cin >> p;
    ans=power(num,p);
    cout<< "\n Power of "<<num <<" is "<<ans;
     }
    return 0;
    
}

