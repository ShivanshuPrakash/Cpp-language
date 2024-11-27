// You can declare object with class declaration 

/*syntax
class Employee
     (class defination)
     Divya ,  Swati ,Tarun
*/ //NOT RECOMENDED
// ------------------------------NESTING OF MEMBER FUNCTION--------------------------------------
#include<iostream>
#include<string.h>
using namespace std;

class binary {
    public:            // by default class ma sab kuch private hota ha
      string s;
    private:
      void check_binary ();
    public:
   void read ();
//    void check_binary ();
   void exchange ();
   void display ();

};
void binary:: read(){ 
    cout<<"Enter the value of s: "<<endl;
    cin>>s;
    cout<<"The value of s is: "<<s<<endl;
}
void binary :: check_binary(){
    for(int i = 0; i <= s.length(); i++)
    {
        if((s.at(i) != '0') && (s.at(i) != '1')){   //A valid binary number consists only of the characters '0' and '1'. The loop iterates through each character in the string, checks if it's either '0' or '1', and prints "Incorrect binary format" if any character does not meet this condition.
            cout<<"Incorrect binary format"<<endl;
             exit(0); //When exit(0) is called, the program execution stops immediately.
        }
    }
}
void binary :: exchange() {
    check_binary(); // nested  member function
    for(int i = 0; i < s.length(); i++){
    if(s.at(i) == '0'){
        s.at(i) = '1';
       }
    else if ( s.at(i) =='1'){
        s.at(i) = '0';
       }   
      
     }
}
void binary :: display(){
    cout<<"Now the value of s is: "<<s<<endl;
}

int main(){
 binary b;
 b.read();
//  b.check_binary();
 b.exchange();
 b.display();


return 0;
}