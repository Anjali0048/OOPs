#include<iostream>
using namespace std;

class stud {
    char usn[20], name[30];
    float marks[3];
    int i;
public:
    float avg;
    void read(); // Function to read student details
    void calc(int); // Function to calculate average marks
    void disp(); // Function to display student details
};

void stud::read() {
    cout << "Enter USN no.: ";
    cin >> usn;
    cout << "Enter name: ";
    cin >> name;
    for (i = 0; i < 3; i++) {
        cout << "Enter the marks of subject " << i + 1 << ": ";
        cin >> marks[i];
    }
}

void stud::calc(int n) {
    int sum = 0, min = marks[0];
    for (i = 0; i < n; i++) {
        sum += marks[i];
        if (min >= marks[i])
            min = marks[i];
    }
    avg = float(sum - min) / 2;
}

void stud::disp() {
    cout << usn << "\t" << name << "\t";
    for (i = 0; i < 3; i++)
        cout << marks[i] << "\t";
    cout << avg << "\n";
}

int main() {
    int topper, i, z;
    float max = 0;
    

    stud s[2]; // Array of student objects

    // Read details and calculate average marks for each student
    for (i = 0; i < 2; i++) {
        s[i].read();
        s[i].calc(2);
    }

    cout << "USN\tName\t";
    for (i = 0; i < 3; i++) {
        cout << "Marks " << i + 1 << "\t";
    }
    cout << "Avg.\n";

    // Display details of each student
    for (i = 0; i < 2; i++)
        s[i].disp();

    // Find the student with the highest average marks
    for (i = 0; i < 2; i++) {
        if (max < s[i].avg) {
            max = s[i].avg;
            topper = i;
        }
    }

    // Display details of the topper(s)
    for (i = 0; i < 2; i++) {
        if (s[topper].avg == s[i].avg) {
            cout << "\nThe topper is student " << i + 1 << ": ";
            cout << "\nDetails:-\n";
            s[i].disp();
        }
    }

    return 0;
}
