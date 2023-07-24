#include <iostream>
using namespace std;

#define size 5

class stack {
    int stck[size];
    int tos;

public:
    void init();        // Initialize the stack
    void push();        // Push an element onto the stack
    int pop();          // Pop an element from the stack
    void display();     // Display the elements in the stack
};

void stack::init() {
    tos = 0;            // Set top of stack (tos) to 0, indicating an empty stack
}

void stack::push() {
    int i;
    if (tos == size) {  // If the stack is full (tos equals size), show stack overflow error
        cout << "Stack overflow\n";
        return;
    }
    cout << "Enter element: ";
    cin >> i;
    stck[tos] = i;      // Add the input element to the top of the stack
    tos++;             // Increment tos to point to the next empty location
}

int stack::pop() {
    if (tos == 0) {     // If the stack is empty (tos equals 0), show stack underflow error
        cout << "Stack underflow\n";
        return 1;
    }
    tos--;             // Decrement tos to point to the topmost element
    cout << "Popped element is: " << stck[tos];
    return 0;
}

void stack::display() {
    if (tos == 0) {     // If the stack is empty (tos equals 0), show stack empty message
        cout << "Stack empty\n";
        return;
    }
    for (int i = 0; i < tos; i++) {
        cout << stck[i] << "\n";     // Display each element in the stack
    }
}

int main() {
    int ch, i;
    stack s;
    s.init();             // Initialize the stack

    while (1) {
        cout << "\n1. Push 2. Pop 3. Display\n";
        cin >> ch;

        switch (ch) {
            case 1:
                s.push();    // Call push() method to push an element onto the stack
                break;
            case 2:
                s.pop();     // Call pop() method to pop an element from the stack
                break;
            case 3:
                s.display(); // Call display() method to display the elements in the stack
                break;
            default:
                return 0;    // Exit the program if an invalid option is selected
        }
    }
}
