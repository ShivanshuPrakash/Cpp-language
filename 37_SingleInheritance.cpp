// Video 38
#include <iostream>
using namespace std;
class Base{
int data1; // Private by default and is not inheritable
public:
int data2;
void setData();
int getData1();
int getData2();

};
void Base ::setData(){
    data1 = 10;
    data2 = 20;
}
int Base :: getData1(){
    return data1;
}
int Base::getData2(){
    return data2;
}
class Derived: 
public Base{    // Class is being derived publically
/*
if class is called privately then public member function of base class is private for derived one
so we need to call them with the help of public member function of derived class and cant write/call them with derived class objects 
Example: Code is commented below 
*/
int data3; // private data member of derived class
public:
void process();
void display();

};
void Derived ::process(){
    data3 = data2*getData1();
}
void Derived ::display(){ 
    cout<<"Value of data 1 is: "<<getData1()<<endl; // data 1 is not inherited so it is displayed by tikdam as it is private data member of base class
    cout<<"Value of data 2 is: "<<data2<<endl; // data 2 is public data member of base class so it can be inherited easily with name
    cout<<"Value of data 3 is: "<<data3<<endl; // data 3 is also public data member of base class

}
int main()
{
   Derived o1;
   o1.setData(); // setdata is public mem function of base class so it is easily inherited from base to derived so we are able to call it 
   o1.process();
   o1.display();
    
    return 0;
}
/*
#include <iostream>
using namespace std;

class Base {
    int data1; // private by default and is not inheritable
    

public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};

void Base::setData() {
    data1 = 10;
    data2 = 20;
}

int Base::getData1() {
    return data1;
}

int Base::getData2() {
    return data2;
}

class Derived : private  Base { // Class is being derived privately
    int data3;

public:
    void process();
    void display();
};

void Derived::process() {
    setData();
    data3 = data2 * getData1();
}

void Derived::display() {
    cout << "Value of data 1 is " << getData1() << endl;
    cout << "Value of data 2 is " << data2 << endl;
    cout << "Value of data 3 is " << data3 << endl;
}

int main() {
    Derived der;
    // der.setData(); // Can't do this as setData is private
    der.process();
    der.display();

    return 0;
}

*/