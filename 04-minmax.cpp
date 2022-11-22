#include <iostream>

using namespace std;

class NumArr {
    int size = 0;
    int arr[10];
    public:
        void input() {
            while (size < 1 || size > 10) {
                cout << "Enter size of array(Max = 10)\n";
                cin >> size;
            }
            cout << "Enter elements:\n";
            for (int i = 0; i < size; i++) {
                cin >> arr[i];
            }
        }
        void sort() {
            for (int i = 0; i < size; i++) {
                for (int j = i; j < size; j++) {
                    if(arr[i] > arr[j]) {
                        arr[i] += arr[j];
                        arr[j] = arr[i] - arr[j];
                        arr[i] -= arr[j];
                    }
                }
                cout << arr[i] << endl;
            }
            
        }
        int getIndex(int n) {
            if (n > 0) return arr[n];
            return arr[size+n-1];
        }
};

int main()
{
    NumArr arr;
    arr.input();
    arr.sort();
    cout << "2nd largest: " << arr.getIndex(-2) << endl;
    cout << "2nd smallest" << arr.getIndex(2) << endl;
    return 0;
}
