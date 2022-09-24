#include<iostream>  
using namespace std; 
class readint  
 {  
 float a,b;  // data member
 public:  
 void read()  // member function
 {  
 cout<<"\n\nEnter the First Number : ";  
 cin>>a;  
 cout<<"\n\nEnter the Second Number : ";  
 cin>>b;  
 }  
 friend class sum;  // friend class 
 };  
 class sum  
 {  
 public:  
 float c; // data member 
 void add(readint rd)  // 
 {  
 c=rd.a+rd.b;  
 cout<<"\n\nSum="<<c;  
 }  
 };  
 int main()  
 {  
 int cont;  
 readint rd; // rd is an object of readint class 
 sum s;   // s is an object of class sum
 rd.read();  
 s.add(rd);  
 return 0;
 }  

