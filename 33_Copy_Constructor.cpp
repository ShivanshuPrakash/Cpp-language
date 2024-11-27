// Copy Constructor
//Video 34

#include<iostream>
using namespace std;
class Number{
    int a;
    public:
    Number(){
        a = 0;
    }
    Number(int num){
        a = num;
    }
    // copy constructor
    // When no copy constructor is found, compiler supplies its own copy constructor
    Number(Number &obj){
        cout<<"Copy constructor called"<<endl;
        a = obj.a;
    }
    void display(){
        cout<<"The number for this object is "<< a <<endl;
    }
};


int main(){
Number x,y,z(45),z2;
x.display();
y.display();
z.display(); 
// z1 should exactly resembel z or x or y

Number z1(z); // copy constructor invoked
z1.display();

z2 = z; //Copy constructor not called
z2.display();
Number z3 = z;   // copy constructor invoked
return 0;
}