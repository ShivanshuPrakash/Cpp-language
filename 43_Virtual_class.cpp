// Video 45
#include<iostream>
using namespace std;



class Student{
 protected:
    int roll_number;
 public:
    void set_roll_number(int a){
       roll_number = a;
    }
    void print_roll_number(){
        cout<<"The roll number of student is: "<<roll_number<<endl;
    }
};

class Test : virtual Student{
 protected:
 float maths, physics;
 public:
   void set_marks(float m1, float m2){
    maths = m1;
    physics = m2;
  }
  void print_marks(){
    cout << "You result is here: "<<endl
                     << "Maths: "<< maths<<endl
                     << "Physics: "<< physics<<endl;
  }
};
class Sports: virtual public Student{
    protected:
      float score;
    public:
      void set_score(float a){
        score =a ;
      }
      void print_score(){
        cout<<"Your PT score is: "<<score<<endl;
      }
};
class Result : public Test, public Sports{
private:
 float total;
 public:
  void display(){
    total = maths + physics;
    print_roll_number();
    print_marks();
    print_score();
  }
   

};
int main(){

Result Shivanshu;
Shivanshu.set_roll_number(18);
Shivanshu.set_marks(99,98.9);
Shivanshu.set_score(100);
Shivanshu.display();
return 0;
}