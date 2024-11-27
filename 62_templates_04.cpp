// Video 67
//Function templates

#include<iostream>
#include <cstdio>
using namespace std;
float funAvg(int a ,int b){
    float avg = (a+b)/2.0;
    return avg;
}
// above function is only applicable for int numbers 
// if we want to calculate it for other datatypes we need to make ample of functions

template<class T1, class T2>
float TemAvg(T1 a, T2 b){
    float average = (a+b)/2;
    return average;
}

template< class T1 >
void Custom_swap ( T1 & a1 , T1 & b1){
    T1 temp = a1;
    a1 = b1;
    b1 = temp;
     
}


int main(){
    float a;
    a = funAvg(6,9);
    printf("The average of numbers are %.3f \n",a);

    a = TemAvg(1.9 , 3);
    printf("The average of numbers are %.3f \n",a);
    
    char a1 , a2;
    a1 = 's';
    a2 = 'm';
    cout<<"The value of a1 is: "<<a1<<endl;
    cout<<"The value of a2 is: "<<a2<<endl;
 cout<<"---------------------------------------------------------------"<<endl;
    Custom_swap(a1,a2);
    cout<<"The value of a1 is: "<<a1<<endl;
    cout<<"The value of a2 is: "<<a2<<endl;
 cout<<"---------------------------------------------------------------"<<endl;
    
return 0;
}