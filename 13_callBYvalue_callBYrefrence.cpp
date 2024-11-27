#include<iostream>
using namespace std;
// call by reference 
void swap(int *a , int *b){
    cout<<"the value of a is: "<<a<<endl;   // address of a 
    cout<<"The value of b is: "<<b<<endl;   // address of b
    cout<<"the value of *a is: "<<*a<<endl; // value stored at address of a 
    cout<<"The value of *b is: "<<*b<<endl; // value stored at address of b 
    int temp; 
    temp=*a;          // temp= value stored at address of a 
    *a=*b;            // *a= value stored at *b (overwrite the value)
    *b=temp;          // *b= value stored at temp ( overwrite the value)
}
// call by reference by C++ reference variables 
void swapBYreference_variable(int &a, int &b){
    // refrence variable concept
    // int x=4
    // int &y=x (here y is 4 now )
    
    int rev;
    rev=a;
    a=b;
    b=rev;

}


int main(){
    int a, b;
    a= 7;
    b= 5;
    cout<<"The value of a before swap is: "<<a<<endl;
    cout<<"The value of b before swap is: "<<b<<endl;
    swap(&a,&b);
    cout<<"The value of a after swap is: "<<a<<endl;
    cout<<"The value of b after swap is: "<<b<<endl;
cout<<"CALL BY REFERENCE BY C++ REFERENCE VARIABLES"<<endl;
    int x,y;
    x=10;
    y=100;
   cout<<"The value of x is "<<x<<" and value of y is: "<<y<<endl;
   swapBYreference_variable(x,y);
   cout<<"The value of x is "<<x<<" and value of y is: "<<y<<endl;

 
return 0;
}