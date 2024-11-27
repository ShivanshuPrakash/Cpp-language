#include<iostream>
using namespace std;

class Baseclass{
    public:
      int var_base;
      void display(){
        cout<<"Display base class member function"<<endl;
        cout<<"The value of base class variable var_base is: "<<var_base<<endl;
      }
};
 class DerivedClass : public Baseclass{
    public:
    int var_derived;
    void display(){
        cout<<"Display Derived class member function"<<endl;
        cout<<"The value of derived class variable var_derived is: "<<var_derived<<endl;
    }
 };

  
int main(){
//EXAMPLE OF LATE BINDING
Baseclass *base_class_pointer;   // a pointer that points to base class object
Baseclass obj_base;             // object of base class
DerivedClass obj_derived;   // derived class object 
base_class_pointer = & obj_derived;   // possible due to inheritance
base_class_pointer->var_base = 77; // as var_base is public member function as well as it is also available in derived class  so we can assign value to it from anywhere or also by base class pointer
// base_class_pointer ->var_derived = 44;  // will throw error   
// This will throw an error because base class pointer does not have access to members of derived class
    
base_class_pointer ->display();  // This will call base class function not derived class function
DerivedClass * derived_class_pointer;  // Derived class pointer 
derived_class_pointer = &obj_derived;   // Derived class pointer  points derived class object
derived_class_pointer -> var_base = 50;   // as derived class has inherited base class so we can set value of var_base by derived class pointer
derived_class_pointer ->var_derived = 100;  // var_derived is public so we can access it from anywher outside the class
derived_class_pointer->display(); // This will call derived class function



return 0;
}

/*
QUESTION'S
1) How my base class pointer is pointing derived class object and Why can the base class pointer access only the base class members?
Answer :  
     


     So in short way the answer is when i make a pointer of base class the compiler knows the base class layout or you can say compiler
     share all the information of base class to that pointer but does not pass any of derived class therefore by base class pointer we 
     are only able to get base class data members or member functions 

-------------------------------------------------------------------------------------------------------------------------------------------------
2) If my base class pointer is pointing to derived class object then how by base class pointer we are able to access data member of base class
3) And if my base class pointer is pointing derived class object so when i call display function  why it calls base class function
4) My  base class pointer is pointing to derived class object then why when i try set derived class data member by that pointer it shows error
5) Is i am able to point derived class pointer to base class object if yes what whould be its nature
6) What do you understand by late binding and how and where in this code it is applicable
7) Also tells where in this code polymorphism takes place 
*/