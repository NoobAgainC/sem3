#include <iostream>
#include <string.h>

#define MAX 28

using namespace std;

class Person {
    char name[MAX];
    public:
        void getname() {
            cout << "Enter your name:" << endl;
            cin >> name;
        }
        void putname() {
            cout << "Name: " << name << endl;
        }
};

class Student : Person {
    int id;
    int sem;
    public:
    void getdetails() {
        getname();
        cout << "Enter your Roll number:" << endl;
        cin >> id;
        cout << "Enter your semester:" << endl;
        cin >> sem;
    }
    void putdetails() {
        putname();
        cout << "Roll Number: " << id << endl;
        cout << "Semester: " << sem;
    }
};

int main() {
    Student a;
    a.getdetails();
    a.putdetails();
}
