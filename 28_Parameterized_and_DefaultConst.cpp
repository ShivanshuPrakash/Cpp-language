// Video 30

//Defalut and Parameterized constructor 

#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
    Complex(int,int); // Constructor Declaration 

void printData()
{
        cout<<"Your number is "<<a<<" + "<<b<<" i "<<endl;
    }
};
Complex ::Complex(int x, int y){  //------>Parameterized Constructor
    a =x; 
    b =y;
} 
int main(){
    //Implicit call
/*
This is an implicit call to the constructor. The constructor is called
 directly by passing the arguments (2, 3).
*/
Complex a(2,3); // Changed variable name from 'a' to 'c' to avoid confusion
a.printData();
// Explicit call
/*
This is an explicit call to the constructor.
 Here, Complex(5, 7) explicitly creates a Complex object
  with the specified arguments, and then this temporary object is used to initialize b.
------------>
Simplified Explanation:
Step 1: Call the constructor Complex(5, 7) to create a temporary Complex object.
Step 2: Use this temporary Complex object to initialize b.
*/
Complex b = Complex(5,7);
b.printData();
return 0;
} 