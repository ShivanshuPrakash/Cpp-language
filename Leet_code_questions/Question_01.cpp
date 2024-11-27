/* QUESTION
Given an integer array arr, return true if there are three consecutive odd numbers in the array. Otherwise, return false.
 

Example 1:

Input: arr = [2,6,4,1]
Output: false
Explanation: There are no three consecutive odds.
Example 2:

Input: arr = [1,2,34,3,4,5,7,23,12]
Output: true
Explanation: [5,7,23] are three consecutive odds.
 

Constraints:

1 <= arr.length <= 1000
1 <= arr[i] <= 1000 
*/
// ANSWER
#include <iostream>
using namespace std;
int main() {
   int  arr[11] = {1,1,34,3,4,6,7,23,12,6,2};
   int output=0;
   for (int i = 0 ; i<=11 ; i++){
       if (arr[i]%2==1 && arr[i+1]%2==1 && arr[i+2]%2==1){
           output = 1;
           break;
       }
       
           
        if(output ==1){
            cout<<"True";
        }
        else{
            cout<<"False";
            return 0;
        }
        
       
        
        }
       
   
    return 0;
}