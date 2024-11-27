// video 33
//The constructor is called automatically by the runtime as part of the object 
//creation process. The constructor doesn't have a return type because it is 
//not directly called by our code. Instead, it is called by the runtime system.
#include<iostream>
using namespace std;

class BankDeposite{
    int principle;
    int yr;
    int Intrest;
    int Amount;
public:
// Overloading of function 
     BankDeposite(int q, int p , int r);
     BankDeposite(int q, int p ,  float r);
     void display();
};
// function declaration 
BankDeposite :: BankDeposite(int q , int p , int R)
{
    principle = q;
    yr = p;
    Intrest = R;
    Amount = principle;
    for (int i = 0; i < yr; i++)
    {
        Amount = Amount*(1+Intrest);
    }
}
BankDeposite :: BankDeposite(int q , int p , float r)
{
    principle = q;
    yr = p;
    Intrest = float(r)/100;
    Amount = principle;
    for (int i = 0; i < yr; i++)
    {
        Amount = Amount*(1+r);
    }
    
}

void BankDeposite ::display(){
cout<<endl<<"Principle amount was "<<principle<<endl
<<" Return value after "<< yr << " is "<<Amount<<endl;
}

int main(){


int p;
int y;
float r;
int R;
 cout << "Enter the value of p (principle): ";
    cin >> p;
    cout << "Enter the value of y (years): ";
    cin >> y;
    cout << "Enter the value of r (interest rate in %): ";
    cin >> r;
    BankDeposite var1(p,y,r) , var2(p,y,r) , var3(p,y,r) ;
    var1 = BankDeposite(p,y,r);
    var1.display();
return 0;
}