#include<iostream>
using namespace std;
 // Video 68

 //Member Function Templates & Overloading Template Functions
template<class T>
class Shourya{
    public:
    T data ;
    public:
     Shourya(T a){
        data = a;
    }
    void get_data();
          
};

template <class T>
void Shourya<T> :: get_data(){
    cout<<"The value of data is: "<<data<<endl;

}

// Overloading Template Function

template<class T>
void func(T z){
    cout<<"I am first templatized func and my value is: "<<z<<endl;
}

void func(int x){
    cout<<"I am example of overloding template function and i am given priority because i am exact match"<<endl
    <<"So span exact match have highest priority"<<endl<<
    "and my value is: "<<x<<endl;
}

int main(){

Shourya <int> Shiv(5);
cout<<Shiv.data<<endl;
Shourya <float> Shivay(5.7);
Shivay.get_data();

func (7);  // will call int defined function               //exact match have highest priority 


cout<<"------------------------------------------------------------------------------"<<endl;



func<int>(10);   //  will call templatized function  // exact match have highest priority 

cout<<"------------------------------------------------------------------------------"<<endl;


func<float>(18.1);  // will call templatizwd function         //exact match have highest priority 


return 0;
}