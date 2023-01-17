#include <iostream>

#define MAX 5

using namespace std;

class Queue
{
private:
    int arr[MAX];
public:
    int size = 0;
    bool push(int);
    bool pop();
    void peek() {
        cout << "First element of Queue is: " << arr[0] << endl;
    }
    bool isEmpty() {
        if (size == 0) {
            cout << "Queue is Empty" << endl;
            return true;
        }
        return false;
    }
    void print();
};

bool Queue :: push(int n) {
    if (size == MAX) {
        cout << "Queue is already full!" << endl;
        return false;
    } 
    arr[size++] = n;
    cout << "Pushed " << n << " to the Queue" << endl;
    return true;
}

bool Queue :: pop() {
    if (isEmpty()) return false;
    for (int i = 0; i < size-1; ++i ) arr[i] = arr[i + 1];
    size--;
    cout << "Popped from the Queue" << endl;
    return true;
}

void Queue :: print() {
    if (isEmpty()) return;
    cout << "Following are the elements of Queue: " << endl;
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << endl;
    }
}

int main() {
    Queue a;
    int i;
    cout << "Enter numbers to push to the Queue. Enter '!' for popping element from Queue, '@' to peek at Queue, any other character to stop program." << endl;
    while(true) {
        cin >> i;
        if (!(cin)) {
            cin.clear();
            if (cin.peek() == '!') a.pop();
            else if(cin.peek() == '@') a.peek();
            else break;
            cin.ignore();
        }
        else a.push(i);
    }
    a.print();
}