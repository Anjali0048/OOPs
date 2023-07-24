// 2(a)Write a C++ program to read the data of n employee and compute net salary of each employee using pointer. Given that an employee class contains following :-

// Data members:	Employee no, Employee name, Basic salary, DA, IT, Net salary, gross salary

// Member functions: To read data, to calculate net salary and to print data
// [DA = 52% of basic salary, IT = 30% of gross salary, Gross salary = DA + Basic, Net salary = DA + Basic – IT].


#include <iostream>
using namespace std;

class employee {
    int num, basic;
    long da, it, netsal, gsal;
    char name[20];

public:
    void read();       // Read employee details from user
    void disp();       // Display employee details
    void calc();       // Calculate salary components
};

void employee::read() {
    cout << "Enter employee ID, name, and basic salary: ";
    cin >> num >> name >> basic;
}

void employee::calc() {
    da = (0.52) * basic;              // Calculate dearness allowance
    gsal = da + basic;                // Calculate gross salary
    it = (0.3) * gsal;                // Calculate income tax
    netsal = basic + da - it;         // Calculate net salary
}

void employee::disp() {
    cout << num << "\t" << name << "\t\t" << basic << "\t\t" << da << "\t\t"
         << it << "\t\t" << gsal << "\t" << netsal << "\n";
}

int main() {
    

    employee e[2], *p;
    for (int i = 0; i < 2; i++) {
        p = &e[i];
        p->read();              // Read details for each employee
        p->calc();              // Calculate salary components for each employee
    }

    cout << "Sl No.  EID       Name             Basic Salary     DA          Gross Salary  Income Tax    Net Salary\n";
    for (int i = 0; i < 2; i++) {
        p = &e[i];
        p->disp();              // Display details for each employee
    }

    return 0;
}
