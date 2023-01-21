/*
Link: https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/divisible-or-not-81b86ad7/
*/
#include <iostream>
using namespace std;
int main() {
	int num;
	long val;
	cin >> num;    //Reading input from STDIN

	for (int i=0; i<num; ++i) {
		cin >> val;
	}
	if (val % 10 == 0) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}