// Video 43
#include<iostream>
using namespace std;

class Base1{
    public:
       void greet(){
        cout<<"How are you? "<<endl;
       }
};
class Base2{
    public:
       void greet(){
        cout<<"Kase ho app"<<endl;
       }
};
class Derived : public Base1, public Base2 {
   int a;
   public:
   // To solve ambiguity
     void greet(){
        Base1 :: greet();
        /*
        The line Base1::greet(); in the Derived class means that the greet function
         from the Base1 class should be called, explicitly resolving any ambiguity 
         between the greet functions defined in Base1 and Base2.
        */
     }
};
class B{
    public:
      void say(){
         cout<<"Hello World "<<endl;
      }
};

class D : public B
// here if code of class d is commented the when we call c.say in int main function
// it will print "Hello World"
// Otherwise if Derived class has its own function with same name then it will call apna wala
// Kinda overwrite ho zayage 

{
   int a;
   public:
      void say(){
         cout<<"Hello world Fuck Yourself "<<endl;
      }
};
int main(){
   //AMBIBUITY 01

    Base1 obj1;
    Base2 obj2;
    obj1.greet();
    obj2.greet();
    Derived obj;
    obj.greet(); //Derived::greet" is ambiguous


   // AMBIBUITY 02

   B b;
   b.say();

   D c;
   c.say(); // check the commented part in the Derived class D


return 0;
}