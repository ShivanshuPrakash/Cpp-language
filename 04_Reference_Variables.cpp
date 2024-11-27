#include<iostream>
using namespace std;
int var=7;
int main(){
int var = 3;
cout<<"The value of local variable: "<<var<<endl;
cout<<endl;
cout<<"The value of global variable: "<<::var<<endl; // scope resolution operator indicates global scope

// USE OF SIZE OF OPERATOR 
float a = 2.22;
long double b=2.22;
cout<<"The size of float variable is: "<<sizeof(a)<<endl;   //4
cout<<"The size of long double variable is: "<<sizeof(b)<<endl;

// REFERENCE VARIABLE 

int x = 100;
int &y = x;
// x = 50;
cout<<"The value of x variable is: "<<x<<endl;
cout<<"The address of x variable is: "<<&x<<endl;
cout<<"The address of y variable is: "<<&y<<endl;
cout<<"The value of y variable is: "<<y<<endl;
//When you create a reference to a variable, both the reference and the original variable refer
//to the same memory location. This means that changes made to the original variable will
//be reflected in the reference, and vice versa
// no special memory allocation for variable y it just a alias for x or second name of x
y = 200; // Modify y, which also changes x 

cout << "New value of x: " << x << endl; // Prints 200
cout << "New value of y: " << y << endl; // Prints 200
 

// TYPECASTING  

float p = 22.2;
int q = 22;
cout<<"The value of p before Typecasting is: "<<p<<endl;

cout<<"The value of p after Typecasting is: "<<(int)p<<endl;

cout<<"The value of sum of p and q befor typecasting is: "<<p+q<<endl;
cout<<"The value of sum of p and q after typecasting is: "<<int(p)+q<<endl;
// here i use diff syntax for typecasting which is also true 

return 0;
}