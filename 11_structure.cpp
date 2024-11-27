// *************************************Structure*********************************
#include<iostream>
#include<string.h>
using namespace std;
typedef struct employee{          //The struct named employee is defined with three members:
     int salary;
     int code;
     char name[10];
     //string name;

}ep;

int main(){

//struct employee tarun;         //An instance of the employee structure named tarun is declared.
//struct employee Divya;
//struct employee kshitij;
ep tarun; 
ep Divya;
ep kshitij;
//Assign values to tarun
tarun.salary = 50000;                             // Example salary
tarun.code = 1234;                               // Example code
strcpy(tarun.name, "Tarun");                    // Assigning a string to name


 // Print the values
cout << "Employee Details:" << endl;
 cout << "Name: " << tarun.name << endl;
 cout << "Salary: " << tarun.salary << endl;
 cout << "Code: " << tarun.code << endl;



return 0;
}