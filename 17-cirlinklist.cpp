#include <iostream>

using namespace std;

class Node {
public:
    int val;
    Node *next;
    
    Node(int n, Node *ptr = nullptr) {
        val = n;
        next = ptr;
    }
};

class CirLinkList {
    Node *head = nullptr;
public:
    ~CirLinkList() {
        while (deleteNode());
    }
    void insertNode(int n) {
        Node *a = new Node(n);
        if (!head) {
            head = a;
            a->next = a;
            return;
        }
        Node *ptr = head;
        while (ptr->next != head) ptr = ptr->next;
        ptr->next = a;
        a->next = head;
        head = a;
    }
    bool deleteNode() {
        if (head == nullptr) return false;
        if (head->next == head) {
            delete head;
            head = nullptr;
            return true;
        }
        Node * tmp = head, * ptr = head;
        while (ptr->next != head) ptr = ptr->next;
        ptr->next = head = head->next;
        delete tmp;
        return true;
    }
    void print() {
        Node* ptr = head;
        while (ptr->next != head) {
            cout << ptr->val << endl;
            ptr = ptr -> next;
        }
        cout << ptr->val << endl;
    }
};

int main() {
    CirLinkList a;
    a.insertNode(3);
    a.insertNode(4);
    a.deleteNode();
    a.insertNode(5);
    a.print();
    return 0;
}
