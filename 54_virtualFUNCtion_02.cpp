// Video 57
#include<iostream>
#include<cstring>
using namespace std;

// Example of virtual function 

class Grand_Parent{
   protected:
      string name;
      int AGE;
    public:
       Grand_Parent(string n , int a){
        name = n ;
        AGE = a;
       }
    virtual void display(){
     cout<<"bogoud code and virtual function"<<endl;
    }


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

/*

RULES FOR VIRTUAL FUNCTION 
1. they cannot be static 
2. they are accessed by object pointers
3. virtual function can be a friend function or inherited in another class for overwriting
4. if in derived class their is no other function to write on virtual function then virtual function of base class will run

*/


return 0;
}