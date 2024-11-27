// Video 71

#include<iostream>
#include<vector>  // header file

using namespace std;
template <class T>
void display (vector <T> &vec){
    cout<<"Display function working ...."<<endl;
    for (int i = 0; i<vec.size() ; i++)
    {
        cout<<vec[i]<<" ";
        cout<<vec.at(i)<<" ";  //used to print the element at index i of the vector vec. 
    }
    cout<<endl;
}

int main(){
    vector<int> Vec1;
// array size can only be initialized during making does not increase or decrease once made
// vector size can be increased or decreased during compile time
int element;
int size;
cout<<"Enter the value of size of vector "<<endl;
cin>>size;
for (int i = 0; i < size ; i++)
{
    cout<<"Enter an element to add this vector: "<<endl;
    cin>>element;
    Vec1.push_back(element);

}
Vec1.pop_back(); // removes end element 
 display(Vec1);
// iterator making
 vector<int> :: iterator iter = Vec1.begin();  // iterator name iter and points to begning of Vec1 and its type is int
 Vec1.insert(iter,566); // To insert 
// Vec1.insert(iter+1,566);  // now add at second position 
Vec1.insert(iter+3,5,88);   //  add 5 copy of 88
 cout<<"displaying vec1: "<<endl;
 display(Vec1);


// Ways to Creat vector 
vector<char>vec2(4);  // 4-elements character vector
vector<char>vec3(vec2);
vector<int>vec4(6,3);  // 6- elemnt vector of 3s shows 2 time due to at line in function ]
vec2.push_back('5');   // [shows 2 time due to at line in function ]
 cout<<"displaying vec2: "<<endl;

display(vec2);
 cout<<"displaying vec4: "<<endl;

display(vec4);
cout<<"displaying vec3: "<<endl;

display(vec3);

cout<<endl;
cout<<"Finding size of vec4"<<endl;
cout<<vec4.size()<<endl;
/*
some operatins you  must know
insert, push back , pop back, front , back, swap etc 

*/
return 0;
}