#include <iostream>
#include <string>
#include <ctype.h>
#include <algorithm>

using namespace std;

class Equation
{
    string eq;
public:
    void input();
    void output();
    void assign();
    string removeSpaces(string str)
    {
        str.erase(remove(str.begin(), str.end(), ' '), str.end());
        return str;
    }
};

void Equation::input() {
    getline(cin, eq);
    eq = removeSpaces(eq);
}

void Equation::output() {
    cout << eq << endl;
}

void Equation::assign() {
    string num;
    int ptr = 0, co = 0, po;
    for (int i = 0; i < eq.length(); i++) {
        if (eq[i] == 'x') {
            num = eq.substr(ptr, i-ptr);
            co = stoi(num);
            if(eq[i+1] != '^') po = 1;
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
