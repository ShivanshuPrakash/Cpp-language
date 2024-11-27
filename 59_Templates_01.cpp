// Video 63
//TEMPLATES
/*To perform a similar operation on several kinds of data types, a programmer need not write 
different versions by overloading a function. Instead the programmer can write a C++ template 
based function that will work with all data types. There are two types of templates in C++, 
function templates and class templates.




SYNTAX:-
template <typename T>
class ClassName {
    // Class members go here
};
*/






//-------------------------------------------------------------------------------------------------------------------
// Templates are also called parameterized classes
#include<iostream>
using namespace std;



template<class T>  // 'template' keyword to define a template 
                   // 'T' is the parameter 
                   //  class keyword defines the type of parameter 'T' that it can be anything int,float,double etc [class means type]
                  


// making a class name vector
class vector{
    public:
    T * arr;  // Pointer declaration of type T
    int size;
    public:

    vector (int m){   // constructor that sets value of size automatically 
        size = m;
        arr = new T[size];// This expression dynamically allocates memory for an array of size elements of type T.
                          // as new keyword used to alloacte memory dynamically and here allocated memory is for 'T' type data type
                          // as arr is a pointer so arr will point to 1st element of memory 
     } 
  
       T dotProduct(vector &v){      // Parameter for this function is reference to another vector object
       T d = 0;                     // a variable 'd' of type 'T' is initialized to 0
         for(int i = 0; i < size; i++){      // for loop 
        //    d = d + this->arr[i] * arr[i];
            d += this->arr[i] * v.arr[i];
            // this->arr[i] accesses the i-th element of the calling object’s array.
            // v.arr[i] accesses the i-th element of the array in the passed vector object v.
        
        }
          return d;
    }


};

int main(){
    //FOR INT
 vector <int>v1(3);   // make an object v1 and passsing value 3 to run constructor to make v1 as array of 3 elements of type int
    v1.arr[0] = 4;    // accesssing that array by dot operator and setting value for that array of object v1
    v1.arr[1] = 3;
    v1.arr[2] = 1;
 vector <int>v2(3);   // making another object 
    v2.arr[0] = 1;
    v2.arr[1] = 0;
    v2.arr[2] = 1;
int a = v1.dotProduct(v2);
cout<<"The dot product is: "<<a<<endl;

// for float
vector <float>v3(3);   
    v3.arr[0] = 1.4;    
    v3.arr[1] = 3.3;
    v3.arr[2] = 0.1;
 vector <float>v4(3); 
    v4.arr[0] = 0.1;
    v4.arr[1] = 1.90;
    v4.arr[2] = 4.1;
float A = v3.dotProduct(v4);
cout<<"The dot product is: "<<A<<endl;

return 0;
}

