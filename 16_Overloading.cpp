//                              OVERLOADING OF FUNCTION
#include<iostream>
using namespace std;

int sum(float a, int b){
    return (a+b);
}
int sum(int a , int b, int c ){
    return (a+b+c);
}
int main(){
int a,b,c,d;
a=5;
b=7;
c=9;
d=1;
cout<<"The answer is: "<<sum(5,7)<<endl;
cout<<"The value is: "<<sum(7,9,1)<<endl;

return 0;
}