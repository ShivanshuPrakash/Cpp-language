//**************************'********Inline Functions||Default Arguments & Constant Arguments||******************


#include<iostream>
using namespace std;
// inline function
 inline int  product(int a, int b){
     return a*b;
 }

 // DEFAULT ARGUMENTS

//  intrest = principle amount * time period * rate of intrest 
int Total_amount(int principle_amount ,int time_period, float rate_of_intrest=10.5){

int intrest= principle_amount*time_period*rate_of_intrest;
return intrest;
}

// STATIC VARIABLE

int reverse_counting(int a, int b){
    static int c=0;
    c=c+1;
  
    return a+b-c;
}


int main(){
int a,b;
cout<<"Enter the value of a and b:"<<endl;
cin>>a;
cin>>b;
// NORMAL FUNCTION 
cout<<"The product of numbers are: "<<product(a,b)<<endl;

// DEFAULT ARGUMENTS
int principle_amount;
cout<<"Enter Your principle amount "<<endl;
cin>>principle_amount;
int time_period;
cout<<"Enter the time period; ";
cin>>time_period;
cout<<"The total amount is "<<Total_amount(principle_amount,time_period)<<endl;

// STATIC FUNCTION CHECKING
for(int i=0; i<a ; i++){
    cout<<"Calling static function "<<reverse_counting(a,b)<<endl;

};
 cout<<"Calling static function "<<reverse_counting(a,b)<<endl;
 cout<<"Calling static function "<<reverse_counting(a,b)<<endl;
 int d= 5;
 int f = 5;
 cout<<"now value of local static var is: "<<reverse_counting(d,f)<<endl;
//  cout<<"Calling static function "<<reverse_counting(a,b)<<endl;
//  cout<<"Calling static function "<<reverse_counting(a,b)<<endl;
//  cout<<"Calling static function "<<reverse_counting(a,b)<<endl;
//  cout<<"Calling static function "<<reverse_counting(a,b)<<endl;
//  cout<<"Calling static function "<<reverse_counting(a,b)<<endl;

return 0;
}