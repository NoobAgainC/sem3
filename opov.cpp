#include<iostream>

using namespace std;

class Cordinates {
    int x, y, z;
    public:
        void getCordinates() {
            cout << "Enter x, y, and z co-ordinates respectively:" << endl;
            cin >> x >> y >> z;
        }

        void printCordinates() {
            cout << "X Co-ordinate: " << x << endl;
            cout << "Y Co-ordinate: " << y << endl;
            cout << "Z Co-ordinate: " << z << endl;
        }

        Cordinates operator+(Cordinates &a) {
            Cordinates temp;
            temp.x = x + a.x;
            temp.y = y + a.y;
            temp.z = z + a.z;
            return temp;
        }
};

int main() {
    Cordinates a, b;
    cout << "Enter Co-ordinates for point A:" << endl;
    a.getCordinates();
    cout << "Enter Co-ordinates for point B:" << endl;
    b.getCordinates();
    a = a + b;
    cout << "Sum of Co-ordinates of point A and B:" << endl;
    a.printCordinates();
    return 0;
}