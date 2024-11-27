//Array of Objects & Passing Objects as Function Arguments in C++ 

#include<iostream>
using namespace std;

class Employee{
    int id ;
    int salary;
    public:
    void setId(){
        salary = 122;
        cout<<"Enter the id of employee"<<endl;
        cin>>id;
    }
    void getId(){
        cout<<"The id of this employee is"<<id<<endl;
    }
};

int main(){

Employee Aditya,Sarthak,Namit,Aman;
/* Aditya.setId();
Aditya.getId(); */
// too much work to set for each employee
Employee company[100];  // here we link an array that can hold upto 100 employes 
/* company[0].setId();
company[0].getId(); */  // this also take too long time and energy
//so we set id to all 100 members by initializing an loop for array
for(int i = 0 ; i<5 ; i++){
     cout<<"Setting id  employee number: " <<i+1<<endl;
    company[i].setId();
    company[i].getId();
}

return 0;
}