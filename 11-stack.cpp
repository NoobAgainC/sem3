#include <iostream>

#define MAX 5

using namespace std;

class Stack
{
private:
    int arr[MAX];
public:
    int size = 0;
    bool push(int);
    bool pop();
    void peek() {
        cout << "First element of Stack is: " << arr[0] << endl;
    }
    bool isEmpty() {
        if (size == 0) {
            cout << "Stack is Empty" << endl;
            return true;
        }
        return false;
    }
    void print();
};

bool Stack :: push(int n) {
    if (size == MAX) {
        cout << "Stack is already full!" << endl;
        return false;
    } 
    for (int i = size; i > 0; --i ) arr[i] = arr[i - 1];
    arr[0] = n;
    size++;
    cout << "Pushed " << n << " to the stack" << endl;
    return true;
}

bool Stack :: pop() {
    if (isEmpty()) return false;
    for (int i = 0; i < size; ++i ) arr[i] = arr[i + 1];
    size--;
    cout << "Popped from the stack" << endl;
    return true;
}

void Stack :: print() {
    if (isEmpty()) return;
    cout << "Following are the elements of stack: " << endl;
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << endl;
    }
}

int main() {
    Stack a;
    int i;
    cout << "Enter numbers to push to the stack. Enter '!' for popping element from stack, '@' to peek at stack, any other character to stop program." << endl;
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