#include<iostream>
using namespace std;
 union answer{
 int a;
 int b;
 int c;
 };
int main(){
    union answer dubai;
    dubai.a= 10000;
     dubai.b=12345;
     cout<<dubai.a<<endl;
    cout<<dubai.b<<endl;
/*1. union Declaration (union answer { ... };):
A union named answer is defined with three members: int a, int b, and int c.
In a union, all members share the same memory location, meaning they overlap. The size of the union is determined by the size of its largest member.
2. union Initialization (union answer dubai;):
An instance of the union named dubai is created.
3. Assigning a Value (dubai.a = 10000;):
The member a of the union dubai is assigned the value 10000.
Since all members share the same memory location, writing to dubai.a affects the value of dubai.b and dubai.c as well.
4. Commented Out Lines:
The lines dubai.b = 12345; and cout << dubai.a << endl; are commented out and do not affect the execution.
5. Printing a Value (cout << dubai.b << endl;):
The value of the member b is printed. Since b shares memory with a, dubai.b will reflect the value stored in dubai.a.*/
 return 0;
}