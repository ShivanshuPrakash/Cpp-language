// ---------------------------------ENUM-----------------------------------------------------------
// Enumerations are a way to assign symbolic names to integral constants,
//  making the code more readable and maintainable. They are commonly used to represent sets
//  of related constants.
#include<iostream>
using namespace std;
// ---------------------------------------------------------------------
enum meal { Breakfast = 10, lunch = 20, dinner = 30 };


// ------------------------------------------------------------------------
enum day { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };
    day today = Tuesday;

// -----------------------------------------------------------------------
int main(){
    cout << Breakfast << endl; // Prints 10
    cout << lunch << endl;     // Prints 20
    cout << dinner << endl;    // Prints 30


/*enum Declaration (enum meal { Breakfast, lunch, dinner };):

An enum named meal is declared with three enumerators: Breakfast, lunch, and dinner.
enum (short for "enumeration") is a user-defined type consisting of a set of named integral constants. By default, these constants are assigned values starting from 0 and incrementing by 1 for each subsequent enumerator unless otherwise specified.
Breakfast is assigned 0
lunch is assigned 1
dinner is assigned 2

Printing Enumerators (cout << Breakfast << endl; cout << lunch << endl; cout << dinner << endl;):

cout is used to print the values of the enumerators to the console.
Since enumerators are essentially integers, they are printed as such.
cout << Breakfast; prints 0 because Breakfast is the first enumerator and is assigned 0 by default.
cout << lunch; prints 1 because lunch is the second enumerator and is assigned 1 by default.
cout << dinner; prints 2 because dinner is the third enumerator and is assigned 2 by default.*/
// ***********************************APPLICATION**************************************************


    if (today == Tuesday) {
        cout << "It's Tuesday!" << endl;
    } else {
        cout << "It's not Tuesday." << endl;
    }
/*Enumerations are useful for defining a set of related constants,
 such as states, types, or categories. For instance, an enum could represent days of the week,
  months of the year, or error codes in a program.*/
  return 0;
}