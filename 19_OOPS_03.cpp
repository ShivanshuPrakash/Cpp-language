// OBJECTS MEMORY ALLOCATION & USING ARRAYS IN CLASSES

#include<iostream>
using namespace std;


class shop {

int itemId [100];    // Array to store item IDs
int itemPrice[100];    // Array to store item prices
//int counter;            // Counter to keep track of number of items
int counter=0;   // Direct initialization
public :
 //void initCounter (){   // Function to initialize counter
  //  counter =0;
 //}
void setPrice();            // Function to set price for an item
void displayPrice();        // Function to display prices of all items

};
void shop::setPrice(){
    cout<<"Enter id of  your item no."<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"Enter price of  your item"<<endl;
    cin>>itemPrice[counter];
    counter++;
}

void shop:: displayPrice(){
    for (int i =0; i< counter ; i++){
        cout<<"The price of item with id - "<<itemId[i]<<" is: "<<itemPrice[i]<<endl;
    }
}
int main(){
shop dukan;
dukan.setPrice();
dukan.setPrice();
dukan.setPrice();
dukan.displayPrice();
return 0;

}