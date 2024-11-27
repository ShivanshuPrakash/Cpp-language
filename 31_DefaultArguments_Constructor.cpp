// video 32
#include<iostream>
using namespace std;
// Default arguments in constructor 
class Simple{
int data1 ;
int data2 ; 
public:
 Simple(int a , int b=69){  // Default arguments to b 
    data1 = a;
    data2 = b;
}
void printData(){
    cout<<"The value of data1 and data2 are: "<<data1 <<" and "<<data2<<endl;
}
};

int main(){

Simple obj1(1,2);
obj1.printData();
Simple obj2(7);
obj2.printData();
return 0;
}