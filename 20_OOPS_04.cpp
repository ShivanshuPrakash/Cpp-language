#include<iostream>
using namespace std; 



class Employee{
    int id;
    static int count;
    public:
        void setData(){
            cout<<"Enter the id of employee "<<endl;
            cin>>id;
            count++;
        }
        void getData(){
            cout<<"The id of employee "<<count<<" is: "<<id<<endl;
        }

        static void getcount(){
            //cout<<id;  // Throws error  becaues static function only have access of static members  
            cout<<"The value of count is: "<<count<<endl;  // the static function is made to get values of all static variable
        }
};
int Employee :: count; //Default value is 0
int main(){
    Employee Shivanshu, Shiva, Shourya;
    Shivanshu.setData();
    Shivanshu.getData();
    Employee::getcount();

    Shiva.setData();
    Shiva.getData();
    Employee::getcount();
    
    Shourya.setData();
    Shourya.getData();
    Employee::getcount();
    
return 0;
}