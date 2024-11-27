// VIDEO 50
#include<iostream>
using namespace std;

// Basic Example
/*
int a = 1;
int *ptr = &a;   // ptr have address of a and *ptr will have value stored at addres of a
*(ptr) = 999;    // Updating or rewriting value at address of a
*/

int main(){
    // new Keyword / new operator
//  The new operator in C++ programming plays a vital role in dynamic memory allocation
//  and object construction. It enables programmers to allocate memory at runtime and
//  create objects dynamically. Understanding the new operator is crucial for effective
//  memory management and building flexible applications
    int *p = new int (1); // Dynamically memory allocation
  /*
  new int(1) allocates memory for an integer and initializes it with the value 1.
p holds the address of this allocated memory.
Accessing the Value:

*p dereferences the pointer p to access the value stored at that memory location.
  */
  
   cout<<"The value at address p is: "<< *(p)<<endl;
    cout<<"The value at address p is: "<< (p)<<endl;
// Explain 1st line of this  code ? what is new operator or Keyword


// Allocating a block of memory
int *arr = new int[3];   // Dynamically memory allocation
arr[0] = 10;
*(arr+1) = 20;
arr[2] = 30;
cout<<"The value at arr[0] is: "<< *(arr)<<endl;
cout<<"The address at arr[0] is: "<< (arr)<<endl;

// delete keyword / delete operator
int *arr2 = new int[3];   // Dynamically memory allocation
arr2[0] = 100;
arr2[1] = 200;
arr2[2] = 300;
cout<<"The value at arr2[0] is: "<< *(arr2)<<endl; // what does this line tells and why arr[0] value comes as a output
// prints the value of the first element, 100. This is because *(arr2) is equivalent to arr2[0].
cout<<"The value at arr2[1] is: "<< (arr2[1])<<endl;
cout<<"The value at arr2[2] is: "<< (arr2[2])<<endl;

cout<<"The address at arr2[0] is: "<< (arr2)<<endl;
delete[]arr; // What does it mean
/*
New and Delete Operators in C++ The new operator is used to dynamically allocate memory
on the heap for an object or an array of objects. An delete operator is used to deallocate
the memory.
*/
return 0;
}