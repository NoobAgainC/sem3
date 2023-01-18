#include <iostream>
#define MAX 5

using namespace std;

class DeQueue{
    int arr[MAX];
    int front = -1, rear = 0;
public:
    void getFront() {
        if (isEmpty()) return;
        cout << "Front element:" << arr[front] << endl;
    }
    void getRear() {
        if (isEmpty()) return;
        cout << "Rear element:" << arr[rear] << endl;
    }
    bool isFull() {
        if ((front == 0 && rear == MAX - 1) || front == rear + 1) {
            cout << "Queue is full!" << endl;
            return true;
        }
        return false;
    }
    bool isEmpty() {
        if (front == -1) {
            cout << "Empty Queue"<< endl;
            return true;
        }
        return false;
    }
    void insertFront(int n) {
        if (isFull()) return;
        if (front == -1) {
            arr[0] = n;
            front = 0;
            return;
        }
        front = (MAX + front - 1) % MAX;
        arr[front] = n;
    }
    void insertRear(int n) {
        if (isFull()) return;
        if (front == -1) {
            arr[0] = n;
            front = 0;
            return;
        }
        rear = (rear + 1) % MAX;
        arr[rear] = n;
    }
    void deleteFront() {
        if (isEmpty()) return;
        if (front == rear) {
            front = -1, rear = 0;
        }
        else front = (front + 1) % MAX;
    }
    void deleteRear() {
        if (isEmpty()) return;
        if (front == rear) {
            front = -1, rear = 0;
        }
        else rear = (rear - 1 + MAX) % MAX;
    }
    void print () {
        if (front == -1) cout << "Queue is empty!";
        cout << "Following are the elements of Doubly ended Queue (from front o rear): " << endl;
        int i = front;
        do {
            cout << arr[i] << endl;
            i = (i + 1) % MAX;
        }
        while (i != (rear + 1) % MAX);
    }
};

int main() {
    DeQueue a;
    a.insertFront(2);
    a.insertRear(4);
    a.insertRear(9);
    a.getFront();
    a.getRear();
    a.insertRear(8);
    a.print();
    return 0;
}
