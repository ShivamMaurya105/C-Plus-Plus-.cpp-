#include<iostream>
using namespace std;
const float pi=3.14;
float area(float n,float b,float h) 
{
float ar;
ar=n*b*h;
return ar;
}
float area(float r)
{
float ar;
ar=pi*r*r;
return ar;
}
float area(float l,float b)
{
float ar;
ar=l*b;
return ar;
}


int main()
{
float b,h,r,l;
float result;
cout<< "\n Enter the Base and Height of Triangle : \n";
cin>>b>>h;
result=area(0.5,b,h); // calling 
cout<<"\n Area of Triangle : "<< result << endl;
cout<<"\n Enter the Radius of Circle : \n";
cin>>r;
result=area(r); // func calling
cout<<"\n Area of Circle: " << result << endl;
cout<< "\n Enter the Length and Breadth of Rectangle :\n";
cin>>l>>b;
result=area(l,b); // function calling
cout<<"\n Area of Rectangle "<<result<<endl;
return 0;
}

