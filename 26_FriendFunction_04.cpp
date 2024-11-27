
// write a function to swap value of private data of 
// of two different class
// THis is done by concept of refernce variable also called call by reference
#include<iostream>
using namespace std;
// forward declaration
class c2;

class c1{
    int val;
    public:
    void indata(int a){
        val = a;
    }
    void display(void){
        cout<<"The value of c1 class data is: "<<val<<endl;
    }
    friend void exchange (c1 &x, c2&y);
};
class c2{
    int val2;
    public:
    void indata(int a){
        val2 =a; 
    }
    void display(){
        cout<<"The value of c2 class data is: "<<val2<<endl;
    }
    friend void exchange (c1 &x, c2 &y);
};
// refernce variable is bascially another name of variable 
//CONCEPT :
// Alias: A reference variable is essentially another name for an 
// existing variable. Once a reference is initialized to a variable, 
// it cannot be changed to refer to another variable.
void exchange(c1 & x, c2 & y){
    int tmp = x.val;
    x.val = y.val2;
    y.val2 = tmp;
}
int main(){ 
c1 oc1;
c2 oc2;

oc1.indata(34);
oc1.display();
oc2.indata(67);
oc2.display();
exchange(oc1,oc2);
// cout<<"The value of c1 after  exchanging becomes: "<<oc1.display()<<endl;
// [cant run the code by above line ]
//  function in class c1 does not return a value. Instead, 
// it prints the value directly to the console.
cout<<"The value of c1 after  exchanging becomes: "<<endl;;
oc1.display();

cout<<"The value of c2 after  exchanging becomes: "<<endl;
oc2.display();

return 0;
}