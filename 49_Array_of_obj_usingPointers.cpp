#include<iostream>
using namespace std;

class Shop{
    int id;
    float price;
    public:
    void set_data( int a, float b){
        id = a;
        price = b;
    }
    void get_data( ){
        cout<<"Code for this item is: "<<id<<endl;
        cout<<"Price of this item is: "<<price<<endl;
    }
};


int main(){
int size = 3;
Shop *ptr = new Shop[size];
// here new operator allocates a memmory address for an object of class 'Shop'
// and then give that memory address to pointer 'ptr'
int code, p;


Shop *ptrTemp = ptr;  //here *ptrTemp will point to address of ptr[0]




//LOOP FOR ENTERING VALUE
for (int  i = 0; i < size; i++)
{
    cout<<"Enter the Id and price of item "<<i+1<<endl;
    cin>>code>>p;
    ptr->set_data(code,p);
    
    ptr++;
}

// LOOP FOR PRINTING VALUE



for (int i = 0; i < size; i++)
{
    cout<<"Item number: "<<i+1<<endl;
    ptrTemp->get_data();
   // ptr++; // in above loop we already ++ the pointer so this time it on last place and incrementing it now is wrong
   ptrTemp++;
}







//----------> THIS WAY YOU CALLED BOTH PUBLIC FUNCTIONS IN ONE LOOP
// for (int  i = 0; i < size; i++)
// {
//     cout<<"Enter the Id and price of item "<<i+1<<endl;
//     cin>>code>>p;
//     ptr->set_data(i,p);
//     ptr->get_data();
//     ptr++;
// }
 

return 0;
}



/*
ADVANCE CODE:



#include <iostream>
using namespace std;

class Shop {
    int id;
    float price;
public:
    void set_data(int a, float b) {
        id = a;
        price = b;
    }
    void get_data() {
        cout << "Code for this item is: " << id << endl;
        cout << "Price of this item is: " << price << endl;
    }
};

int main() {
    int size = 3;
    Shop *ptr = new Shop[size];
    Shop *ptrTemp = ptr; // Save the original pointer

    int id;
    float price;
    for (int i = 0; i < size; i++) {
        cout << "Enter the Id and price of item " << i + 1 << endl;
        cin >> id >> price;
        ptrTemp->set_data(id, price);
        ptrTemp++;
    }

    // Reset ptrTemp to the original pointer to display the data
    ptrTemp = ptr;
    for (int i = 0; i < size; i++) {
        ptrTemp->get_data();
        ptrTemp++;
    }

    delete[] ptr; // Free the dynamically allocated memory
    return 0;
}


*/