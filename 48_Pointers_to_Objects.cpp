// Video 51
#include<iostream>
using namespace std;


class complex{

    int real , imaginary;   //Private members
    public:  // Public functions 
     void get_data(){
        cout<<"The real part is: "<<real<<endl;
        cout<<"The imaginary part is: "<<imaginary<<endl;
     }
     void set_data(int a , int b){
        real = a;
        imaginary = b;
     }
};
int main(){


    complex c1;

    c1.set_data(23,32);
    c1.get_data();
    cout<<"Pointer pointing Object"<<endl;
    complex *ptr=&c1; // COMPLEX ACT AS A DATA TYPE
   //  Here, complex is being used as a data type to declare a pointer variable ptr.
   //  This pointer ptr can point to an object of type complex.
    (*ptr).set_data(53,34);
    (*ptr).get_data();

    // Anothe way 
    complex *src = new complex;   //Dynamic Memory Allocation for Object:
    /*
This statement does two things:

Allocates memory for an object of type 'complex' on the heap.
Returns the address of the allocated memory, which is then stored in the pointer 'src'
and then by dereferencing operator we get the value stored at that address 
  */
    
    (*src).set_data(55,33);
    (*src).get_data();




    // Arrow operator
   
   
    /*
   An Arrow operator in C/C++ allows to access elements in Structures, Unions and class.
   It is used with a pointer variable pointing to a structure, union and class.
   It combines the dereferencing operator (*) and the member access operator (.) into one convenient operator  
    */
     src->set_data(99,67);
    src->get_data();

/*
 SYNTAX EXPLANATION:
Here, (*ptr) dereferences the pointer ptr to get the object c1, and then the dot operator .
accesses the member functions set_data and get_data.
*/

   // Array of objects

   complex *arr = new complex[3];
   arr->set_data(44,22);
   arr->get_data();
   (arr+1)->set_data(11,111);
   (arr+1)->get_data();
/*
An array of 3 objects of the class complex is created dynamically. 
The first object in the array is accessed using arr, and the set_data function is called to set values (44, 22)
and display them. The second object in the array is accessed using (arr+1), and set_data is called to set values (11, 111) and display them.
*/
return 0;
}