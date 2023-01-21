/*
Problem link: https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/is-zoo-f6f309e7/
*/
#include <iostream>

using namespace std;

int main() {
    string input;
    int z = 0;
    cin >> input;
    for (auto ch : input) {
        if (ch == 'z') ++z;
        else break;
    }
    if (2 * z == (input.length() - z)) cout << "Yes" << endl;
    else cout << "No" << endl;
}