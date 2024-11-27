// VIDEO  72

// list 

#include<iostream>
#include<list>

using namespace std;

//lst.end : reference to end of list
//lst.begin : reference to starting of list

void display(list<int> &lst){
    list<int> :: iterator it;
    for(it=lst.begin(); it != lst.end(); it++){
        cout<<*it<<endl;
    }
    cout<<".........................."<<endl;
}


int main(){

// Biderictional linear list usefull for insertion and delition operation
 
 list<int> list1; // list of 0 length
 
 list1.push_back(5);
 list1.push_back(10);
 list1.push_back(15);
 list1.push_back(20);
 list1.push_back(25);
 list1.push_back(4);
 list1.push_back(8);
 list1.push_back(12);
 list1.push_back(16);


//  list<int> :: iterator iter;  // formation of iterator
//  iter = list1.begin();  // iterator pointing to 1st item of list
//  cout<<*iter<<endl;; // print 1st element of list
//  iter++;
//  cout<<*iter<<endl; //print 2st element of list
display(list1);

// Removing elemts from list
list1.pop_back(); // will remove last item or you can use pop_front from starting
list1.remove(15);  // will remove 15 from list
//Note : if their is more than one copy of 15 all will be removed by above operation
display(list1);
// Sorting list
list1.sort();
display(list1);



list <int> list2(4); // empty list of size 3
 // setting list item either by iterator or by for loop
 list<int> :: iterator iter; // iterator formation
 iter = list2.begin();
 *iter = 3;
  iter++;
 *iter = 9;
  iter++;
 *iter = 21;
  iter++;
 *iter = 1;

// NOTE: If you set the size of list more and fill not all of them then the above display will not work [experimrnt: do list(7)insted if list(3)]
 cout<<"Printing List2: "<<endl;
 display(list2);
  
// Merging list 
list1.merge(list2);
cout<<"list1 after merging: "<<endl;
display(list1);
cout<<"Sort merge list: "<<endl;
list1.sort();  // Sorting merge list
display(list1);
list1.reverse(); // reversing list 
display(list1);


return 0;

}