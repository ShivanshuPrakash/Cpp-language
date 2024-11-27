// Video 31
#include<iostream>
using namespace std;
/*
Overloaded constructors essentially have the same name (exact name of the class) 
and different by number and type of arguments.
A constructor is called depending upon the number and type of arguments passed.
While creating the object, arguments must be passed to let compiler know, which constructor needs 
to be called.
*/
class Complex{
int a,b;
public:
Complex(int x, int y){
    a= x;
    b =y;
}
Complex(int x){
    a = x;
    b = 0;
}

void PrintData(){
    cout<<"The value of a and b is: "<<a<<" and "<< b<<" respectively"<< endl ; 
}
};

int main(){

Complex c1(1,2);
c1.PrintData();
Complex c2(2);
c2.PrintData();
return 0;
}