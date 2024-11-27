#include <iostream>
using namespace std;

int main() {
    int arr[11] = {1, 1, 34, 3, 4, 6, 7, 23, 12, 6, 2};
    int output = 0; 

    for (int i = 0; i <= 8; i++) { 
        if (arr[i] % 2 == 1 && arr[i + 1] % 2 == 1 && arr[i + 2] % 2 == 1) {
            output = 1;
            break; 
        }
    }

    if (output == 1) {
        cout << "True";
    } else {
        cout << "False";
    }

    return 0;
}
