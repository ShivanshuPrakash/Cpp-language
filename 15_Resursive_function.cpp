#include<iostream>

using namespace std;
// factorial series 
int factorial(int n){
    int fac;
    if(n==0){
        fac=1;
      
    }
    else if(n==1){
         fac=1;
        }
    else{
         fac=n*factorial(n-1);
    }
    return fac;
}
// fibonacci series 
int fib(int n){
    if (n<2){
        return 1;
    }
    else 
    return fib(n-2) + fib(n-1);
}

int main(){
//     int num;
//     cout<<"Enter the value of number ";
//     cin>>num;
//    int result= factorial(num);
//    cout<<"\nThe fac of number is: "<<result<<endl;

// fibonacci series 

int n;
cout<<"Enter the value of n: ";
cin>>n;
cout<<"\nThe value at nth term of fibonacci series is: "<<fib(n);


return 0;

}

