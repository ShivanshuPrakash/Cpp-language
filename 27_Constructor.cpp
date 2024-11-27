// Constructor [Video: 29]

/*
 a constructor is a special member function of a class that is automatically
  called when an object of that class is created. The primary purpose of a constructor is to initialize objects.
   Constructors have the same name as the class and do not have a return type, not even void.
*/
#include<iostream>
using namespace std;
class Complex{
   int a , b;
   public:
   // Creating a constructor
   Complex();  
   // Constuctor is a special type of member function with the same
   //name as of the class, It is automatically invoked whenever the object is created
   // used to initialized the objects of class
   void printData(){
      cout<<"The value of complex number is: "<<a<<" + "<<b<<"i"<<endl;
   }
};

Complex::Complex(){  //------------> This is a default Constructor[does not accept any parameters ] 
   a = 10;
   b = 7; // here if i dont initialized the value then compiler genreate garbage value 
   // cout<<"The next number is "<<endl;
}


int main(){
Complex o1 , o2 ,o3;
o1.printData();
o2.printData();
o3.printData();
 

return 0;
}
// Properties of constructor 
/*
1. It should be declared in the public section of class
2. They are automatically invoked whenever the object is created 
3. Do not have return type and cannot return values 
4. It can have default arguments
5. we cannot refer to the address
*/