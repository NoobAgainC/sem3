#include <iostream>
#define MAX 5
using namespace std;

struct item {
    int value, priority;
};

class PriorityQueue {
    item arr[MAX];
    int size = 0;

public:

    void enqueue(int val, int prior) {
        if (size == MAX) {
            cout << "Queue is full!" << endl;
            return;
        }
        arr[size].value = val;
        arr[size].priority = prior;
        int i = size;
        while (i > 0 && arr[i].priority < arr[i - 1].priority) {
            swap(arr[i], arr[i - 1]);
            i--;
        }
        size++;
    }

    void dequeue() {
        if (size == 0) {
            cout << "Queue is empty!" << endl;
            return;
        }
        size--;
    }

    int peek() {
        if (size == 0) {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        return arr[size - 1].value;
    }

    void print() {
        if (size == 0) cout << "Queue is empty!";
        cout << "Following are the elements of Queue: " << endl;
        for (int i = size - 1; i > -1; i--) {
            cout << arr[i].value << endl;
        }
    }
};

int main() {
    PriorityQueue a;
    int i;
    cout << "Enter numbers to push to the Priority Queue. Enter '!' for popping element from Queue, '@' to peek at Queue, any other character to stop program." << endl;
    while(true) {
        cin >> i;
        if (!(cin)) {
            cin.clear();
            if (cin.peek() == '!') a.dequeue();
            else if(cin.peek() == '@') cout << a.peek() << endl;
            else break;
            cin.ignore();
        }
        else {
            cout << "Enter priority of element: ";
            int val;
            cin >> val;
            a.enqueue(i, val);
            cout << endl;
        }
    }
    a.print();
}
