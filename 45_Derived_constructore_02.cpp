// Video 48
#include<iostream>
using namespace std;
/*
CASE 1:-
class B : public A{
 Order of execution of constructor -----> first A() then B
};
 
CASE 2:-
class A : public B, public C{
// Order of execution of constructor ----> B() then C() and A()
};


CASE 3:-
class A :public B, virtual public C{
Order of execution of constructor ---> C() then B() and A()
};

*/

class Base1{
    int data1;
    public:
    Base1(int a){
        data1 = a;
        cout<<"Base1 class constructor called"<<endl;
    }
    void printData1(){
        cout<<"The value of data1 is: "<<data1<<endl;
    }
};


class Base2{
    int data2;
    public:
    Base2(int a){
        data2 = a;
        cout<<"Base2 class constructor called"<<endl;
    }
     void printData2(){
        cout<<"The value of data2 is: "<<data2<<endl;
    }
};

class Derived : public Base1 , public Base2 { // constructor called on the basis of  declaration
int derived1 , derived2;
 public:
    Derived(int a , int b , int c, int d): Base1(a) , Base2(b){  // special syntax and its order does not effect calling pattern of constructor 
        derived1 = c;
        derived2 = d;
        cout<<"Derived class constructor called"<<endl;
    }
    void printData(){
        cout<<"The value of derived1 is: "<<derived1<<endl;
        cout<<"The value of derived2 is: "<<derived2<<endl;

    }
};

int main(){
Derived Shivu(1,2,3,4);
Shivu.printData1();

return 0;
}