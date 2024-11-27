// *********************************POINTERS************************************************
// SPECIAL TYPE OF DATA TYPE THAT STORER ADDRESS OF OTHER VARIABLE
// &--------------------------> (ADDRESS OF) OPERATOR
// *--------------------------> DEFERENCING OPERATOR
#include<iostream>
using namespace std;
int main(){
    int a=7;
    int *b=&a;
    // incorrect way 
    // int adda; 
    //  &adda = &a; // logically galat
    // cout<<"the valueeee of adda is : "<<adda;  
    cout<<"The value of a is: "<<a<<endl;                        // prints 7
    cout<<"the address of a is: "<<&a<<endl;                     //prints address of a 
    cout<<"the value of b is: "<<b<<endl;                        // prints address of a 
    cout<<"the value stored at address of b is: "<<*b<<endl;    // prints 7
int**c=&b;
// POINTERS TO POINTERS
cout<<"the value stored at c is: "<<**c<<endl;  // prints 7
cout<<"The addrrss of c is: "<<&c<<endl;   // prints address of c
cout<<"The addrrss of b is: "<<&b<<endl;  // prints address of b
cout<<"The value of c is: "<<c<<endl;     //prints address of b 
cout<<"literall meaning of pointers to pointers is Address_value_at(value_at(c)) is:)";
return 0;
}