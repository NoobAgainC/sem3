#include <iostream>

using namespace std;

class Demo {
    public:
        Demo() {
            cout << "Constructor says Hello!" << endl;
        }
        ~Demo() {
            cout << "Destructor says Bye!" << endl;
        }
};

int main() {
    cout << "Creating object \'a\'" << endl;
    Demo a;
    int i = 2;
    if (i == 2) {
        cout << "Creating object \'b\'" << endl;
        Demo b;
        cout << "Ending Scope of object \'b\'" << endl;
    }
    cout << "Last line of program and hence ending scope of object \'a\'" << endl;
}