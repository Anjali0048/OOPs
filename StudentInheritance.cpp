#include <bits/stdc++.h>
#include <vector>

using namespace std;

class Student {
protected:
    string usn;
    string name;
    int age;

public:
    void getData() {
        cout << "Enter USN: ";
        cin >> usn;
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter Age: ";
        cin >> age;
    }
};

class UGStudent : public Student {
protected:
    int semester;
    float fees;
    float stipend;

public:
    void getUGData() {
        getData();
        cout << "Enter Semester: ";
        cin >> semester;
        cout << "Enter Fees: ";
        cin >> fees;
        cout << "Enter Stipend: ";
        cin >> stipend;
    }

    int getSemester() const {
        return semester;
    }

    int getAge() const {
        return age;
    }
};

class PGStudent : public Student {
protected:
    int semester;
    float fees;
    float stipend;

public:
    void getPGData() {
        getData();
        cout << "Enter Semester: ";
        cin >> semester;
        cout << "Enter Fees: ";
        cin >> fees;
        cout << "Enter Stipend: ";
        cin >> stipend;
    }

    int getSemester() const {
        return semester;
    }

    int getAge() const {
        return age;
    }
};

int main() {
    const int NUM_UG_STUDENTS = 2;
    const int NUM_PG_STUDENTS = 2;

    vector<UGStudent> ugStudents(NUM_UG_STUDENTS);
    vector<PGStudent> pgStudents(NUM_PG_STUDENTS);

    cout << "Enter details for UG students:\n";
    for (int i = 0; i < NUM_UG_STUDENTS; i++) {
        cout << "UG Student " << i + 1 << ":\n";
        ugStudents[i].getUGData();
    }

    cout << "\nEnter details for PG students:\n";
    for (int i = 0; i < NUM_PG_STUDENTS; i++) {
        cout << "PG Student " << i + 1 << ":\n";
        pgStudents[i].getPGData();
    }

    cout << "\nSemester-wise average age for UG students:\n";
    for (int sem = 1; sem <= 8; sem++) {
        int count = 0;
        int sumAge = 0;
        for (const auto& student : ugStudents) {
            if (student.getSemester() == sem) {
                count++;
                sumAge += student.getAge();
            }
        }
        if (count != 0) {
            float averageAge = static_cast<float>(sumAge) / count;
            cout << "Semester " << sem << ": Average Age = " << averageAge << endl;
        }
    }

    return 0;
}
