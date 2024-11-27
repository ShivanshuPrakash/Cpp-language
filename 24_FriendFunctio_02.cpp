// This code defines two classes: Calculator and complex. The Calculator class has a method to add two integers and a method to sum the real parts of two complex numbers. The complex class represents a complex number with real and imaginary parts.





#include<iostream>
using namespace std;
//forward declaration
// This forward declaration informs the compiler that a class named complex will be defined later. It's necessary because Calculator uses complex before it's fully defined.
class complex;
class Calculator{
    public:
    int add(int a, int b){
        return (a+b);
    }
    int sumComplex(complex o1 , complex o2 );
//  A method to sum the real parts of two complex numbers. The implementation is provided later.       
    
};


class complex{

    int a;
    int b;
    //individually declaring functions as friends 
    friend int Calculator :: sumComplex(complex , complex);
    public: 
    //Alternative: Declaring the entire calculator class as friend
    friend class Calculator;
    
    void setNumber(int n1, int n2){
        a=n1;
        b=n2;
    }
    
    void printNumber(){
        cout<<"Your complex number is"<<a<<"+"<<b<<"i"<<endl;
    }
};


  int Calculator:: sumComplex(complex o1, complex o2){
        return (o1.a+o2.a); 
  }
int main(){
    complex o1,o2;
    o1.setNumber(1,4);
    o2.setNumber(5,7);
    Calculator calc;
    int result = calc.sumComplex(o1,o2);
    cout<<"The sum of real part of o1 and o2 is: "<<result<<endl;
    
return 0;
}  