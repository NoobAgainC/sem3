/*
Link: https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/make-all-equal-90a21ab2/
*/

#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int main() {
	int num, min = numeric_limits<int>::max(), count = 0, cnt = 0;
    long steps = 0;
	cin >> num;    //Reading input from STDIN
	vector <int> arr(num);
	vector <int> dec(num);
	for (int i = 0; i < num; i++) {
		cin >> arr[i];
        if (arr[i] < min) {
            min = arr[i];
        }
	}
	for (int i = 0; i < num; i++) {
		cin >> dec[i];
	}
	int i = 0;
	while (count != num) {
		i %= num;
		while (arr[i] > min && arr[i] >= dec[i]) {
			arr[i] -= dec[i];
			steps ++;
		}
		if (arr[i] == min) {
            count++;
        }
		else {
			min = arr[i];
			count = 0;
		}
		if (arr[i] < dec[i]) {
			cnt ++;
			if (cnt == num) {
                steps = -1;
                break;
            }
		}
		i++;
	}
	cout << steps;
}