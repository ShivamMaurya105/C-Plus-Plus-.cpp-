#include<iostream> 
using namespace std;
class time
{
int hours; 
int minutes;
int seconds;
public:
void gettime(int h, int m, int s)
{
hours=h; 
minutes=m;
seconds = s;
}
void puttime(void)
{
cout<< hours<<" hours ";
cout<<minutes<<" minutes and ";
cout<<seconds<<" seconds"<< endl;
}
void sum(time t1 , time t2); // function declaration with objects as arguments
};
void time :: sum (time t1,time t2) // t1 and t2 are objects
{
seconds = t1.seconds + t2.seconds;
minutes= seconds/60;
seconds=seconds%60;	
minutes=minutes+ t1.minutes + t2.minutes;
hours=minutes/60; 
minutes=minutes%60; 
hours=hours+t1.hours+t2.hours;
}
int main()
{
time T1,T2,T3;
T1.gettime(2,21,34); // get T1
cout<<"T1=";  
T1.puttime( ); // display T1

T2.gettime(5,45,56); // get T2
cout<<"T2=";
T2.puttime( );  // display T2

T3.sum(T1,T2); // T3 = T1+T2
cout<<"T3 =";
T3.puttime( ); // // display T3
return(0);
}

