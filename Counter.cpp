#include <iostream>
using namespace std;

class Counter {
public:
    static int count; // static member variable to keep track of the count

    Counter() {
        count++; // Increment count when an object is created
    }

    ~Counter() {
        count--; // Decrement count when an object is destroyed
    }
};

int Counter::count; // Definition of the static member variable

void f(); // Function prototype

int main(void) {
    Counter o1;
    cout << "Objects in existence: ";
    cout << Counter::count << "\n"; // Display the count of objects

    Counter o2;
    cout << "Objects in existence: ";
    cout << Counter::count << "\n"; // Display the count of objects

    f();

    cout << "Objects in existence: ";
    cout << Counter::count << "\n"; // Display the count of objects

    return 0;
}

void f() {
    Counter temp;
    cout << "Objects in existence: ";
    cout << Counter::count << "\n"; // Display the count of objects

    // temp is destroyed when f() returns
}
