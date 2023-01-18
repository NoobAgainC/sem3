#include <iostream>

using namespace std;

class Node {
public:
    int val;
    Node *next;
    
    Node(int n, Node *ptr = NULL) {
        val = n;
        next = ptr;
    }
};

class LinkList {
    Node *head = NULL;
public:
    void insertNode(int n) {
        Node a(n, head);
        head = &a;
        cout << head -> val << endl;
        if(head -> next != NULL)
        cout <<  head -> next-> val << endl;
    }
    void print() {
        Node* ptr = head;
        while (ptr != NULL) {
            cout << ptr->val << endl;
            ptr = ptr -> next;
        }
    }
};

int main() {
    LinkList a;
    a.insertNode(3);
    a.insertNode(4);
    a.print();
    return 0;
}
