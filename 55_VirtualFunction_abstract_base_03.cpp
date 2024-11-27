// Video 58

#include<iostream>
#include<string.h>
using namespace std;

// Abstract base class : a class which has atleast one pure virtual function and cannot be used to creat objects
// such type of  base class is called abstract base class


// Motive + concept 
// as we know if in derived class their is no other function to write on virtual function then
// virtual function of base class will run



/*

But we want that if base class has a virtual function then it is 
neccessity of user to make a function that overwrites it other wise 
code will throw error 
*/


class Grand_Parent{
   protected:
      string name;
      int AGE;
    public:
       Grand_Parent(string n , int a){
        name = n ;
        AGE = a;
       }
    virtual void display() = 0; // Do nothing function  ---> pure virtual function 


// Now if we write virtual function like this than it become neccessary for derived class
// to make a function that overwrites it otherwise it will throw error

};

class Parent : public Grand_Parent{
   int Age;
   public:
    Parent(string n, int a , int ag) : Grand_Parent(n,a){
         Age = ag;
      
    }
    void display (){
        cout<<"This is Parent class function"<<endl;
        cout<<"Parent name = "<<name<<endl;
        cout<<"Grand parent age = "<<AGE<<endl;
        cout<<"Parent age = "<<Age<<endl;
    }
};

class Children : public Grand_Parent {
    int age;
    public:
    Children( string n , int a , int age): Grand_Parent(n, age){
        this-> age = age; 
     
    }
    void display (){
      cout<<"This is Children class function "<<endl;
      cout<<"This is Parent class function"<<endl;
        cout<<"Children name = "<<name<<endl;
        cout<<"Grand parent age = "<<AGE<<endl;
        cout<<"Children age = "<<age<<endl;
    }
};


int main(){

string name;
int AGE;
int age;

cout<<"---------------------------------------------------"<<endl;


// for Parent class
name  = "father";
age = 40;
AGE = 80;

Parent FatherJi(name,AGE,age);
FatherJi.display();


cout<<"---------------------------------------------------"<<endl;

// For Childern class
name = "Son";
age = 20;
AGE = 83;
Children child( name , AGE, age);
child.display();

cout<<"---------------------------------------------------"<<endl;



Grand_Parent *pointers[2];

pointers[0] = & FatherJi;
pointers[0]->display();   // will call parent class  function 

cout<<"---------------------------------------------------"<<endl;


pointers[1] = & child;
pointers[1]->display();   // will call child class  function
// Note : if we comment down the child class display function then 
   //  by above statement it will call base class display function 

cout<<"---------------------------------------------------"<<endl;




return 0;
}





























