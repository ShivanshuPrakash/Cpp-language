// VIDEO 53


// Prior knowledge needed 

//Implicit or Explicit call
//EXPLICIT CALL:-
// An explicit call is when a function is directly invoked by its name. 
// This is the most common way to call functions in C++.

// IMPLICIT CALL:-
// An implicit call is not directly made by the programmer but happens automatically due to certain circumstances in the program. 
// This often occurs with constructors, destructors, type conversions, or operator overloads.


#include<iostream>
using namespace std;
class A{
    int a;
    public:
    void set_data(int a){   // Non-static member function


        // a = a;
    /*
      basically in set data function the priority is given to local variable 'a'
      so when when we give a value to function it does not pass it to member variable 'a' instead to that it assigns the same value to itself 
      like if we gave 4 to function then function will have 4 = 4 which is logically incorrect 
      because it effectively does nothing and does not change the member variable. and throws error 


    so to solve this problem we use this pointer and explanation for this pointer is 
    like every object in c++ have its pointer which refers to itself so here when we use 'this' pointer which refers to its object 
    and with the use of arrow operator we explicitly call member variable 
    and in simple terms the line of code is written like this   [pointer with dereferencing operator] .(dot operator) {name of member variable} = parameter a 
   */    
    this->a = a; //'this' pointer is available
//NOTE: - 
//this->a = 5; // Error: 'this' pointer is not available in static member function
    }
    void get_data(){
        cout<<"The value of a is: "<<a<<endl;
    }
};



using namespace std;
int main(){
A c1;
c1.set_data(7); // Call non-static member functio
c1.get_data();


return 0;
}