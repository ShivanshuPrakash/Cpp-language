// VIDEO 49
#include<iostream>
using namespace std;
/*
Syntax for initilization list in Constructor:
constructor (argument-list) : initilization -section 
{
  assignment + other code;
}
class Test{
int a;
int b;
publuc:
   Test(int i, int j): a(i), b(j)
   {body of constructor}
};

*/

class Test{
int a;
int b;
public:
//    Test(int i, int j): a(i), b(j) ------>  Executable
//  Test(int i, int j): a(i), b(i+j) ------>  Executable
//  Test(int i, int j): a(i), b(a+j) ------>  Executable
//  Test(int i, int j): a(i), b(2*j) ------>  Executable
//  Test(int i, int j): b(a+j) ,a(i)   //------>  Executable
   Test(int i, int j): b(j) ,a(i+b)   //------>  Executable but a will have garbage value [raddi]
// QUESTION :  why above code is not executable and how 5th syntax is executable
   {cout<<"Constructor Executed"<<endl;
   cout<<"The value of a is: "<<a<<endl;
   cout<<"The value of b is: "<<b<<endl;
   }
};





int main(){

Test Shivu(3,5);



return 0;
}