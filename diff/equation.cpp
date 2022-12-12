#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

class Equation
{
    string eq;
public:
    void input();
    void output();
    void assign();
};

void Equation::input() {
    getline(cin, eq);
}

void Equation::output() {
    cout << eq << endl;
}

void Equation::assign() {
    string num;
    int co = 0, po;
    for (int i = 0; i < eq.length(); i++) {
        if (isdigit(eq[i])) num += eq[i];
        else {
            if (co != 0) {
                if (num.length() != 0) co = stoi(num);
                else co = 1;
            }
            else if (eq[i] == 'x'){
                if (num.length() != 0) po = stoi(num);
                else po = 1;
            }
            else po = 0;
            num.clear();
        }
        
    }
}

class Polynomial
{
private:
    int coef = 1;
    int power = 1;
public:
    Polynomial(int co, int po );
};

Polynomial::Polynomial(int co, int po)
{
     coef = co;
     power = po;
}

int main()
{
    Equation a;
    a.input();
    a.assign();
    a.output();
    return 0;
}
