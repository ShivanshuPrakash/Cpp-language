//**********************************************ARRAYS********************************************** */
#include<iostream>
using namespace std;
int main(){
    /*
int marks[5]={7,10,18,45};
// cout<<"The value of marks:"<<marks[0]<<endl;
// cout<<"The value of marks:"<<marks[1]<<endl;
// cout<<"The value of marks:"<<marks[2]<<endl;
// cout<<"The value of marks:"<<marks[3]<<endl;

// PRINTING MARKS WITH LOOPS
for(int i=0; i<4;i++)
{
cout<<"The value of marks in subject "<<i+1<<" is: "<<marks[i]<<endl;
}

// take value of arrys and print them by loops
int jersy_number[5];
for(int i=0; i<4;i++)
{
    cout<<"The jersy number of goats are: ";
    cin>>jersy_number[i];
}

for(int i=0 ; i<4 ; i++)
{
    cout<<"Value of entered number are: "<<jersy_number[i]<<endl;
}


// print the values of above marks array with do-while and while loop
int arr[4]={1,2,3,4};
int i=0;
while(i<4){
    cout<<"The value stored in arr is: "<<arr[i]<<endl;
    i++;
}

//do-while loop
int num[4]={9,8,7,6};
int n=0;
do
{
   cout<<"The values stored in num arry are: "<<num[n]<<endl;
   n++;
} while (n<4);
*/

// **********************************pointers and arrays******************************************
int ptr[5]={5,6,78,76,99};
int *(p)= ptr;
int m =0;
while (m<5)
{
  cout<<"The value of ptr["<<m<<"] are: "<<*p<<endl;
  p++;
  m++;
}
// EXTRA 
int dec[3]={ 32, 45, 67};
int*x=dec;
cout<<*(x++)<<endl;
// cout<<*(x++)<<endl;
*(x)++;
cout<<*x<<endl;


  
return 0;
}