// SEQUENCE CONTROL STRUCTURE (NORMAL WALA)


// SELECTION CONTROL STRUCTURE

#include<iostream>
using namespace std;
int main(){
int age;
cout<<"Enter Your Age: ";
cin>>age;   
if(age<18){
    cout<<"You are not eligible for driving"<<endl;
} 
else if(age==18){
    cout<<"You can drive but you need DRIVING LICENCE"<<endl;
}
else{
    cout<<"You are eligible for driving "<<endl;
}


// USE OF LOGICAL OPERATOR [else-if-else-if ladder]
int code_word;
cout<<"Enter Your code word: ";
cin>>code_word;
cout<<"endl";
if((code_word>1) && (code_word<9)){
    cout<<"You are invited to party and your floor number is 1st"<<endl;
}
else if((code_word>9)&&(code_word<99)){
    cout<<"You are invited to party and your floor is 2nd"<<endl;
}
else if((code_word==0)||(code_word==100)){
    cout<<"Your are chief guest of our party"<<endl;
}


// SWITCH [SELECTION CONTROL STRUCTURE]
int gym;
cout<<"The heviest weight you can lift in gym is:";
cin>>gym;
switch (gym)
{
case 50:
   cout<<"that's ok";
    break;
case 70:
   cout<<"that's good";
    break;
case 90:
   cout<<"that's excellent";
    break;
default:
cout<<"either you are too low or you are too high";
    break;
}
return 0;
}

