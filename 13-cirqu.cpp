#include <iostream>

#define MAX 5

using namespace std;

class CirQueue {
    int front = -1, rear = -1;
    int arr[MAX];
public:
    void enQueue (int n) {
        if ((rear == MAX-1 && front == 0) || (rear == front-1)) {
            cout << "Queue full!" << endl;
            return;
        }
        if (rear == MAX - 1) {
            rear = 0;
            arr[rear] = n;
            return;
        }
        if (front == -1) front = 0;
        arr[++rear] = n;
    }

    void deQueue () {
        if (front == -1) {
            cout << "Empty Queue!" << endl;
            return;
        }
        if (front == rear) {
            front = rear = -1;
            return;
        }
        if (front == MAX - 1) {
            front = 0;
            return;
        }
        ++front;

    }

    void print () {
        if (front == -1) cout << "Queue is empty!";
        cout << "Following are the elements of Queue: " << endl;
        int i = front;
        do {
            cout << arr[i] << endl;
            i = (i + 1) % MAX;
        }
        while (i != (rear + 1) % MAX);
    }
};

int main() {
    CirQueue a;
    int i;
    cout << "Enter numbers to push to the Circular Queue. Enter '!' for popping element from Queue, any other character to stop program." << endl;
    while(true) {
        cin >> i;
        if (!(cin)) {
            cin.clear();
            if (cin.peek() == '!') a.deQueue();
            else break;
            cin.ignore();
        }
        else a.enQueue(i);
    }
    a.print();
    return 0;
}
