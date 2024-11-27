//Video 37
#include<iostream>
using namespace std;
//Base class
class Animal{
    public:
       void eat(){
        cout<<"This animal eats food."<<endl;
       }
};

// Derived class syntax
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
     class members / methods / etc....
}
*/


//Derived Class
class Dog:  // derived class name
public Animal{ //visibility-mode and base-class-name
//The visibility mode (public, protected, or private) specifies how the base class members are inherited in the derived class. The visibility mode affects how the members of the base class are accessible in the derived class.    
    public:  // this says the base class ke public mem. derived class ke public mem. ban zayage and 
    // IF PRIVATE THEN base class public mem. will be derived class private 
    void bark(){
        cout<<"The dogs used to bark."<<endl;
    }
};
// Note : 1)Default visibility mode ------> Private 
//         2) Private members of base class does not Inherit  
//          3) In C++, constructors and destructors do not directly pass through inheritance
//           4)
int main(){
    Dog kutta;
      // Dog class inherits eat() from Animal class
      kutta.eat();

    // Dog class has its own bark() method
    kutta.bark();
return 0;
}

/*
#include <iostream>
using namespace std;

// Base Class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}
};

// Creating a Programmer class derived from Employee Base class
class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }
    void getData(){
        cout<<id<<endl;
    }
};
int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillF(10);
    cout << skillF.languageCode<<endl;
    cout << skillF.id<<endl;
    skillF.getData();
    return 0;
}
*/