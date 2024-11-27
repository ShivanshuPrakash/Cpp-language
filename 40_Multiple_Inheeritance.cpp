// Viddeo 41
// Multiple Inheritance [a bacche 2 bapp]
#include<iostream>
using namespace std;
/*synatax:-
class name : {{visibility-mode}} base1, {{visibility-mode}}base2
{
class body 
};
*/

class Base1{
 protected:
   int baseint1;
 public:
   void set_baseint1(int a){
    baseint1 = a;
   }
};
class Base2{
 protected:
   int baseint2;
 public:
   void set_baseint2(int a){
    baseint2 = a;
   }
};
class Derived : public Base1, public Base2{
  public:
  void show(){
    cout<<"The value of baseint1 is: "<<baseint1<<endl<<"The value of baseint2 is: "<<baseint2<<endl;
  }
/*
Note: But my Inherited Derived class will have baseint in 
      Protected form means i cant print it directlly 
  Inheritance:

*). Derived class publicly inherits from Base1 and Base2.
*). This means that baseint1 and baseint2 are accessible within the Derived class but remain protected from outside access.

*/
};
int main(){

Derived Shivu;
Shivu.set_baseint1(7);
Shivu.set_baseint2(18);
Shivu.show();

return 0;
}



