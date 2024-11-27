//Video 66
// Class template with Default parameters

#include<iostream>
using namespace std;

template<class T1 = int , class T2 = float>
class Shivanshu{
  public:
  T1 a;
  T2 b;
  Shivanshu( T1 x , T2 y){
    a= x;
    b = y;
  }
  public:
  void display(){
    cout<<"The value of data members are " <<a<<" and "<<b<<endl;
  }
};
int main(){
Shivanshu<>Shourya(7 , 18.01);// we need to add angular brackets like we 
// did with functions which do not take any parameters
Shourya.display();
cout<<endl;
cout<<endl;
// Overwriting on default parameters
Shivanshu<float , float> Shiva(99.9 , 98.99);
Shiva.display();

return 0;
}