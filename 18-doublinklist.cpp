#include <iostream>

using namespace std;

class Node {
public:
    int val;
    Node *next;
    Node *prev;
    
    Node(int n, Node *next= nullptr, Node *prev = nullptr) {
        val = n;
        this->prev = prev;
        this->next = next;
    }
};

class DoubLinkList {
    Node *head = nullptr;
public:
    ~DoubLinkList() {
        while (deleteNode());
    }
    void insertNode(int n) {
        Node *a = new Node(n, head);
        if (head) head->prev = a;
        head = a;
    }
    bool deleteNode() {
        if (head == nullptr) return false;
        Node * tmp = head;
        head = tmp->next;
        if (head) head->prev = nullptr;
        delete tmp;
        return true;
    }
    void print() {
        Node* ptr = head;
        while (ptr != nullptr) {
            cout << ptr->val << endl;
            ptr = ptr -> next;
        }
    }
};

int main() {
    DoubLinkList a;
    a.insertNode(3);
    a.insertNode(4);
    a.deleteNode();
    a.insertNode(5);
    a.print();
    return 0;
}
