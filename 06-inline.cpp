#include <iostream>

using namespace std;

class InlineCube {
    int n;
    public:
        void input();
        inline int cube () {
            return n * n * n;
        }
};

void InlineCube :: input() {
    cout << "Enter a number:" << endl;
    cin >> n;
}

int main(int argc, char const *argv[])
{
    InlineCube a;
    a.input();
    cout << "Cube of given number is " << a.cube() << endl;
    return 0;
}
