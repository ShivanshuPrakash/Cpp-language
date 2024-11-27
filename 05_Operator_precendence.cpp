#include<iostream>
#include<iomanip>
using namespace std;
int main(){
// sometimes we want value of some variables can not be changed by anyone or anything 
// so for that we use CONSTANTS 


// CONSTANTS IN C++
const int a = 3; // READ ONLY VARIABLE 
cout<<"The value of a is: "<<a <<endl;
// int a = 6;  shows error 
cout<<"the value of a after change is:"<<a<<endl;
// Remains same as it was a constant variable 
   

// MANUPULATORS 

int x= 22 ,y= 56 , z= 100 ;
cout<<"The value of x is:"<<x<<endl;
cout<<"The value of y is:"<<y<<endl;
cout<<"The value of z is:"<<z<<endl;


cout<<"Now the use of manipulator setw ";
cout<<"\nThe value of x is:"<<setw(5)<<x<<endl;   // now x will take space of 5 num [***22]
cout<<"The value of y is:"<<setw(7)<<y<<endl;
cout<<"The value of z is:"<<setw(9)<<z<<endl;
// Operator presedence as C lamguage 
return 0;
}