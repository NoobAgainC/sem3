#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
    int tnum, n;
    float k;
    cin >> tnum;

    for (int i = 0; i < tnum; ++i) {
        string s;
        int max = 0;
        int char_occurance[26] = {0};
        cin >> n >> k >> s;
        for(auto c : s) {
            if(++char_occurance[c-'a'] > max) max = char_occurance[c-'a'];
        }
        cout << ceil(max/k) << endl;
    }

}