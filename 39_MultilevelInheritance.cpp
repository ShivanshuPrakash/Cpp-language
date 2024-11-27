// Video 40
// Multilevel Inheritance    [Grandfather ------>   Father  ----------> Child ]
#include<iostream>
using namespace std;
class student{
protected:
   int roll_number;
public:
   void set_roll_number(int);
   void get_roll_number();
};
void student :: set_roll_number(int r){
    roll_number = r;
}
void student :: get_roll_number(){
    cout<<"The roll number of student is: "<<roll_number<<endl;
}
class exam : public student{
    protected:
      float maths;
      float physics;
    public:
      void set_marks(float m1 , float m2){
        maths = m1;
        physics = m2;
      }
    void  get_marks(){
    cout<<"The marks obtained in maths are: "<<maths<<endl;
    cout<<"The marks obtained in physics are: "<<physics<<endl;
}
};

class result : public exam{
    float percentage;
    public: 
      void display();
};
void result :: display(){
    get_roll_number();
    get_marks();
    cout<<"Your percentage is: "<<(maths+physics)/2<<" %"<<endl;
    cout<<""<<endl;
    

}

int main(){
// [Student ------> Exam ---------->  Result]
result Shivanshu;
Shivanshu.set_roll_number(2);
Shivanshu.set_marks(99.4,99.9);
Shivanshu.display();

return 0;
}
/*
Notes:
1) 
*/





