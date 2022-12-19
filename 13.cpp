#include <iostream>
#define MAX 5

using namespace std;

class Queue{
    int arr[MAX];
    int front = -1, rear = -1;
public:
    void enQueue(int n) {
        if ((front == 0 && rear == MAX - 1) || front == rear + 1) {
            cout << "Queue is full!" << endl;
            return;
        }
        if (front == -1) front = 0;
        arr[(++rear) % MAX] = n;
    }
    
    void deQueue() {
        if (front == -1) {
            cout << "Empty Queue"<< endl;
            return;
        }
        
        if (front == rear) {
            front = rear = -1;
        }
        else front = (front + 1) % MAX;
    }
    
    void print() {
        cout << "Following are the elements of circular Queue:" << endl;
        for (int i = front; i != rear; i =(i + 1) % MAX) {
            cout << arr[i] << endl;
        }
    }
};

int main() {
    Queue a;
    a.enQueue(2);
    a.deQueue();
    a.print();
    a.enQueue(2);
    a.enQueue(3);
    a.print();
    a.enQueue(5);
    a.deQueue();
    a.print();
    return 0;
}
