#include<iostream>

using namespace std;

class Fibonacci {
    int n;
    public:
        void getLimit() {
            cout << "Enter the length of Fibonacci series:" << endl;
            cin >> n;
        }
        void fiboSeq() {
            int a = 0, b = 1;
            cout << "Fibonacci Series of " << n << " length is: ";
            cout << a << ", " << b;
            for (int i = 0; i < n - 2; i++) {
                cout << ", "<< a + b;
                b = a + b;
                a = b - a;
            }
        }
};

int main() {
    Fibonacci a;
    a.getLimit();
    a.fiboSeq();
    return 0;
}