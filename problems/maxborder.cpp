//Problem from  hackerearth
// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/maximum-border-9767e14c/

#include <iostream>

using namespace std;

int main(void) {
    // https://www.geeksforgeeks.org/fast-io-for-competitive-programming/
    // https://stackoverflow.com/questions/31162367/significance-of-ios-basesync-with-stdiofalse-cin-tienull
    // These sites show why I used below two lines. After running the program it seems to use less storage and increases performance.
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int num;
    cin >> num;
    int maxlen = 0;
    for (int i = 0; i < num; i++) {
        int row, col;
        cin >> row >> col;
        int maxlen = 0;
        for (int j = 0; j < row; j++) {
            string line;
            cin >> line;
            int start, k;
            for (k = 0; k < col; k++)
            {
                if ( line[k] == '#') break;
            }
            start = k;
            for (; k < col; k++)
            {
                if ( line[k] == '.') break;
            }
            if ((k - start) > maxlen) maxlen = k - start;
        }
        cout << maxlen << endl;
    }
    return 0;
}