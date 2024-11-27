#include <iostream>
using namespace std;
int main() {
    char ch= 'E';

        for(int i =0; i<5 ; i++){
        for(int j=0; j<=i;j++){
            cout<<static_cast<char>('E'-j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}
