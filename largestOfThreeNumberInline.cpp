#include <iostream>
using namespace std;

// Function to find the largest of three numbers
// The function uses an inline specifier to optimize performance by avoiding function call overhead
// It takes three float parameters: a, b, and c (with c having a default value of 50)
inline float lar(float a, float b, float c = 50) {
    // Using conditional (ternary) operator to compare and return the largest value
    // If a is greater than both b and c, return a; otherwise, return the maximum of b and c
    return ((a > b && a > c) ? a : (b > c) ? b : c);
}

int main() {
    float x, y, z;
    cout << "Enter three numbers:\n";
    cin >> x >> y >> z;
    cout << "Largest = " << lar(x, y, z);        // Call lar() function with three arguments

    cout << "\nTaking 3rd number as 50\n";
    cout << "Enter two numbers:\n";
    cin >> x >> y;
    cout << "\nLargest using default value = " << lar(x, y) << "\n";   // Call lar() function with two arguments (third argument defaults to 50)

    return 0;
}
