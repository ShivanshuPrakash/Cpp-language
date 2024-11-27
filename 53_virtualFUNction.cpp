// Video 56
//Run time polymorphism
 
#include<iostream>
using namespace std;

class Baseclass{
    public:
      int var_base;
    virtual void display(){
//A C++ virtual function is a member function in the base class that you redefine in a derived class.
//It is declared using the virtual keyword. It is used to tell the compiler to perform dynamic linkage or late binding
// on the function.
        cout<<"Display base class member function"<<endl;
        cout<<"The value of base class variable var_base is: 001"<<endl;
      }
};
 class DerivedClass : public Baseclass{
    public:
    int var_derived;
     void display(){
        cout<<"Display Derived class member function"<<endl;
        cout<<"The value of derived class variable var_derived is: 002"<<endl;
    }
 };

  
int main(){

Baseclass *base_class_pointer;
Baseclass obj_base;            
DerivedClass obj_derived;   
base_class_pointer = & obj_derived;   
base_class_pointer -> display();  





//#core concept 
//QUESTION :
//as we learn earlier that base class pointer will only have knowledge about base class members
//  even if  we points it to derived class object so how this overwriting is possible

//SOLUTION:
// concept used : vTaBle

/*
SO basically what happens here when a class has at least one virtual function 
it makes a v Table , v Table is nothing but a list or array that store address 
of all virtual function available 
At the same time due to inheritance derived class has also have virtual function 
of base class so derived class also makes a vTable , initially copying the vtable of the base class.
so when a virtual function is called through base class pointer the compiler uses
v Table of Derived class object because of virtual keyword in base class function is written which tells compiler that
this function is redefined in derived class so it uses derived class object vTable and to determine which functions
in the derived class override which virtual functions in the base class, the compiler relies on the function signatures
(names, return types, and parameters) to match virtual functions in the base class with their corresponding overrides
in the derived class.
*/


return 0;
}