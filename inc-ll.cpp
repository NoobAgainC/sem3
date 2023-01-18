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
        Node *a = new Node(n, head);
        head = a;
    }
    void deleteNode() {
        Node * tmp = head;
        head = tmp->next;
        delete tmp;
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
    a.deleteNode();
    a.insertNode(5);
    a.print();
    return 0;
}
