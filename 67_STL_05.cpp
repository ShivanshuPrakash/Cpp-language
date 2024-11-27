// Video 74

// Function objects : Function wrapped in a class so that it available like an object

#include<iostream>
#include<functional>
#include<algorithm>

using namespace std;



int main(){
int arr[] = {1,73,4,2,54,10,2,};
sort(arr , arr+5); // sort upto only 5 elemnts
for (int i = 0; i < 7; i++)
{
    cout<<arr[i]<<endl; 
}
cout<<"................................"<<endl;
// function object  also called functor
sort(arr , arr+5, greater<int>());  // now sort in accessinding order
for (int i = 0; i < 7; i++)
{
    cout<<arr[i]<<endl; 
}



return 0;
}