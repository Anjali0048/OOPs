#include <iostream>
#include <cstdio>
using namespace std;

class date {
    int day, month, year;

public:
    // Initialize date using a string
    date(char *d) {
        sscanf(d, "%d%*c%d%*c%d", &month, &day, &year);
    }

    // Initialize date using integers
    date(int m, int d, int y) {
        day = d;
        month = m;
        year = y;
    }

    void show_date() {
        cout << month << "/" << day;    // Display month and day
        cout << "/" << year << "\n";    // Display year
    }
};

int main() {
    date ob1(12, 4, 2003);               // Create date object using integers
    date ob2("10/22/2003");              // Create date object using string

    ob1.show_date();                     // Display date for ob1
    ob2.show_date();                     // Display date for ob2

    return 0;
}
