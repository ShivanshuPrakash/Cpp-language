// Video 73

#include<iostream>
#include<map>
#include<string>


// Map is an associative array

using namespace std;



int main(){

map<string, int > marksMap;
marksMap["Shiva"] = 99;
marksMap["Shourya"] = 100;
marksMap["Shivay"] = 101;

marksMap.insert({{"LOLU", 169}, {"LODU", 199}});

map<string, int > ::  iterator iter;
cout<<"maps printing loop"<<endl;
for(iter = marksMap.begin(); iter != marksMap.end(); iter++){
    cout<<(*iter).first<<" "<<(*iter).second<<"\n";
}

// Use of size operator and empty operator
cout<<"The size of map is: "<<marksMap.size()<<endl;
cout<<"The max _ size of map is: "<<marksMap.max_size()<<endl;
cout<<"The emptys's return value is: "<<marksMap.empty()<<endl;



return 0;
}