//  LOOPS 
#include<iostream>
using namespace std;
int main(){


// FOR LOOP
for(int i=0 ; i<= 10; i++){
    cout<<"The value of i is:"<<i<<endl;
}
// print table of any number by using for loop
for(int i=0 ;i<=10; i++){
    cout<<"table of 9"<<endl;
    cout<<"9 x "<<i<<endl<<i*9<<endl;
}
// 2nd method 
for(int i=6; i<=60; i++)
{
cout<<i<<endl;
i++;
i++;
i++;
i++;
i++;
}
// yeah I know its lengthy but this is the first thought that came in my mind since the guy told that if you write another i++ in for loop you will get ouput i+2 so I wrote i++ 5 times to get output i+6

// Whie loop 
int i;
cout<<"Enter the value of i: ";
cin>>i;
while(i<=40){
    cout<<"The value of i is:"<<i<<endl;
    i++;
}

// do-while loop
int a=2;
do{
    cout<<"The value of a is:"<<a<<endl;
    a++;
}while(a<10);



// CREAT TABLE OF REQ[INPUT THE VALUE OF NUMBER] NUMBER 
int num;
int x;
x=0;
cout<<"The value of num is: "<<endl;
cin>>num;
cout<<"TAble of num is:"<<endl;
do{
    cout<<num<<"x"<<x<<"="<<num*x<<endl;
    x++;
}while(x<=10);


// 2nd logic for table
    int y;
    int s=0;
    cout<<"Enter the number whose table you want: ";
    cin>>y;
    int z = y*10;
    int p;
    p=y;
    cout<<"The value of z is: "<<z<<endl;
    cout<<"table of "<< p<<"is"<<endl;
    do{
        cout<<p<<"X"<<s<<"="<<y<<endl;
        y =p+y;
        s++;
    // } while(y<=(y*10));   WHY  THIS IS NOT WORKING I NEED TO MAKE A NEW VARIABLE FOR THIS
     } while(y<=z);

    return 0;
}
