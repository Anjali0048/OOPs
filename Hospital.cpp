#include <iostream>
using namespace std;

// Structure to represent a date
struct date {
    int d;
    int m;
    int y;
};

// Base class representing a hospital patient
class hospital {
    char name[100];
    struct date d_adm;
    struct date d_dis;
protected:
    int age;

public:
    // Function to get patient data from the user
    void getdata() {
        cout << "Enter name of the patient: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter date of admission: ";
        cin >> d_adm.d >> d_adm.m >> d_adm.y;
        cout << "Enter date of discharge: ";
        cin >> d_dis.d >> d_dis.m >> d_dis.y;
    }

    // Function to display patient data
    void display() {
        cout << name << "\t";
        cout << age << "\t";
        cout << d_adm.d << '-' << d_adm.m << '-' << d_adm.y << "\t \t";
        cout << d_dis.d << '-' << d_dis.m << '-' << d_dis.y;
    }
};

// Derived class representing a pediatric patient
class pediatric_patient : public hospital {
    char vaccine[20];

public:
    // Function to get pediatric patient data from the user
    void get() {
        getdata();
        cout << "Enter the name of vaccine to be given: ";
        cin >> vaccine;
    }

    // Function to display pediatric patient data
    void put() {
        if (age < 12) {
            display();
            cout << "\t" << "\t";
            cout << vaccine;
            cout << "\n";
        } else {
            cout << "Age greater than 12, not a pediatric patient";
        }
    }
};

int main() {
    hospital h[5];
    int n;
    cout << "Enter the number of patients: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        h[i].getdata();
    }

    cout << "Patient database \n";
    cout << "NAME" << "\t" << "AGE" << "\t" << "DATE_OF_ADMISSION " << "\t" << "DATE_OF_DISCHARGE \n";
    for (int i = 0; i < n; i++) {
        h[i].display();
        cout << "\n";
    }

    pediatric_patient a1[5];
    cout << "Enter the number of pediatric patients: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        a1[i].get();
    }

    cout << "Pediatric Patient database \n";
    cout << "NAME" << "\t" << "AGE" << "\t" << "DATE_OF_ADMISSION " << "\t" << "DATE_OF_DISCHARGE" << "\t" << "VACCINE \n";
    for (int i = 0; i < n; i++) {
        a1[i].put();
    }

    return 0;
}
