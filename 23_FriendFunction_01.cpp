// 


#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    void setNumber(int n1 , int n2){
        a = n1;
        b = n2;
    }
    // below declaration can be done at any place in class
    friend complex sum_complex( complex object1, complex object2);  // this line of code declares the sum_complex as friend function of class complex and give permission to access private data memebers
    void printNumber(){
        cout<<"Your number is "<<a<<" + "<<b<<" i"<<endl;
    }
};

complex sum_complex( complex object1, complex object2){  // this is not the member function so it does not have permission to acces privat data members of a class so if we want that this function will use those value we have to declare it as friend of class complex
    complex object3;
    object3.setNumber(object1.a + object2.a , object1.b + object2.b);
    //cout<<a; //you can;t do that as it is not member function
    return object3;
}
int main(){
    complex c1 ,c2 , sum;
    c1.setNumber(1,4);
    c1.printNumber();
    c2.setNumber(5,8);
    c2.printNumber();

    sum = sum_complex(c1,c2);
    sum.printNumber();

return 0;
}
/*
 properties of friend function 
1. Not in the scope of class
2. since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == Invalid
3. Can be invoked without the help of any object
4. Usually contans the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to access any member.

*/