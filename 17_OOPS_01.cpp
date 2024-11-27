#include<iostream>
using namespace std;

class Employee   //The Employee class has five data members: a, b, and c (private), and d and e (public).
// It has two member functions.

/* void setData(int a, int b, int c); for setting the private members.

void getData(); for printing all the members.*/
{
    private: 
      int a,b,c;
    public:
      int d,e; 
      void setData(int a,int b,int c);      // function declaration // Member Function

      /* Control Access: Private data members can only be accessed and modified through public member functions.
       This prevents direct access from outside the class, ensuring that only controlled and validated changes can be made.*/
                                
    //   Alternative Ways to Set Private Data Members
    // =============. Constructor Initialization==========
    // Employee(int a1, int b1, int c1) : a(a1), b(b1), c(c1) {}
    /* int main() {
    Employee e(1, 2, 3); // Values set via constructor
    e.getData();           
    return 0;*/
      void getData(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
        cout<<"The value of e is "<<e<<endl;
      }
      };
      /*
      Employee ::: This indicates that the function setData belongs to the Employee class.
      The scope resolution operator :: is used to specify that setData is a member of the Employee class and not a global function.
       */
      void Employee :: setData(int a1 ,int b1, int c1 ) {   // have same meaning
      
      //void Employee :: setData(int a ,int b, int c ) 


      /*setData is defined outside the class using the scope resolution operator ::,
      It sets the values of the private members a, b, and c.

      getData prints the values of both private and public members.*/

    //QUES:
    //HOW IN A FUNCTION (setData) I AM ABLE TO USE a,b,c i.e the data members of class and assign them equal to parameters of function ?
    // ANSWER :   in setData function we are able to use a,b,c because they are member variables of 'employee' class and we can access them within any member function of the class which allow them to modify them.
        a = a1;     //a=a;
        b= b1;      // b=b;
        c= c1;      // c=c;
      }

// QUES:

// can i set setData member  function inside the class
/* Yes, you can define the setData member function inside the class. 
In C++, you have the flexibility to define member functions either inside or outside the class definition.*/

int main() {
    Employee Divya;                 //An object Divya of type Employee is created
 // Divya.a =34;   --------> this will throw error as a is  private 
    Divya.d = 23;
    Divya.e = 53;
    // Public members d and e are directly assigned values.
    Divya.setData(1,2,3);
    // The private members are set using the setData function.
    Divya.getData();
    // The getData function is called to print all member values.
    Employee Swati; 
    Swati.d = 77;
    Swati.e = 44;
    Swati.setData(22,33,66);
    Swati.getData(); 
    
    return 0;
}