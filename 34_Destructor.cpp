// Video 35
#include<iostream>
using namespace std;

class num {
    static int count; // Static member variable
public:
    // Constructor
    num() {
        count++;
        cout << "This is the time when constructor is called for object number " << count << endl;
    }
    // Destructor
    ~num() {
        cout << "This is the time when my destructor is called for object number " << count << endl;
        count--;
    }
};

// Define and initialize static member variable
int num::count = 0;

int main() {
    cout << "We are inside main function" << endl;
    cout << "Creating 1st object" << endl;
    num n1;
    {
        cout << "Entering this block" << endl;
        cout << "Creating 2 more objects" << endl;
        num n2, n3;
        cout << "Exiting this block" << endl;
    }
    cout << "Back to main" << endl;

    return 0;
}

/*
#include<iostream>
using namespace std;

class num {
    static int count; // Static member variable
public:
    // Constructor
    num() {
        count++;
        cout << "This is the time when constructor is called for object number " << count << endl;
    }
    // Destructor
    ~num() {
        cout << "This is the time when my destructor is called for object number " << count << endl;
        count--;
    }
};

// Define and initialize static member variable
int num::count = 0;

int main() {
    cout << "We are inside main function" << endl;
    cout << "Creating 1st object" << endl;
    num n1;
    {
        cout << "Entering this block" << endl;
        cout << "Creating 2 more objects" << endl;
        num n2, n3;
        cout << "Exiting this block" << endl;
    }
    cout << "Back to main" << endl;

    return 0;
}
*/