// Video 30
// Video 30
//Defalut and Parameterized constructor 
// Quiz question : find distance between two points 
#include<iostream>
#include<math.h>
using namespace std;

class Point{
    int a;
    int b;
    public:
       Point(int x,int y){ //n Constructor defination inside the class
       a = x;
       b = y; 
       }
void printData()
{
        cout<<"Your point is ("<<a<<" , "<<b<<")"<<endl;
    }
friend float Distance(Point obj1 , Point obj2);

};
  

float Distance(Point obj1 , Point obj2){
    float distance;
      distance = sqrt(pow((obj2.a - obj1.a), 2) + pow((obj2.b - obj1.b), 2));
    return distance;
}




int main(){
Point A(2,3); 
A.printData();
// Explicit call
Point B = Point(5,7);
B.printData();
double dis;
dis = Distance(A,B);
cout<<"The distance between these point is: "<<dis<<endl;
return 0;
}  

/*
#include<iostream>
#include<cmath>
using namespace std;

class Point{
    int a;
    int b;
public:
    Point(int x, int y) {  // Constructor definition inside the class
        a = x;
        b = y;
    }

    void printData() {
        cout << "Your point is (" << a << " , " << b << ")" << endl;
    }

    // Member function to calculate distance from the current object to another object
    float Distance(Point obj) {
        float distance;
        distance = sqrt(pow((obj.a - a), 2) + pow((obj.b - b), 2));
        return distance;
    }
};

int main() {
    Point A(2, 3);
    A.printData();

    // Explicit call
    Point B = Point(5, 7);
    B.printData();

    // Calculate and print the distance
    double dis = A.Distance(B);
    cout << "The distance between these points is: " << dis << endl;

    return 0;
}






*/