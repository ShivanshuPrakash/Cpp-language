#include<iostream>
using namespace std;
//forward declaration
class y;
class x{
 int data;
 public:
 friend void add(x,y); // agar forward declaration na ho to  yhe ye bolaga ga ki y kya ha wrong number and didn't allow it to give permission to acces data  in short we need to give forward declaration 
 void setValue(int value){
    data = value;
 }
 
};
class y{
    int num;
    public:
     void setValue(int value){
        num = value;
     }
 friend void add(x,y);
};
void add( x o1, y o2){ // these parameters says that they will take parameters as object of class x abd y [x(class)o1(object)
// and in cout statement the o1.data and o2.num says that object1(o1) of class x will take private datamember of class x ]
    cout<<"Summing data of x and y objects gives me "<<o1.data + o2.num<<endl;
}
int main(){
x a;
y b;
a.setValue(5);
b.setValue(3);
add(a,b);
return 0; 
}