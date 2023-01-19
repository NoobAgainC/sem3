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

class LinkList {
    Node *head = nullptr;
public:
    ~LinkList() {
        while (deleteNode());
    }
    void insertNode(int n) {
        Node *a = new Node(n, head);
        head = a;
    }
    bool deleteNode() {
        if (head != nullptr) {
            Node * tmp = head;
            head = tmp->next;
            delete tmp;
            return true;
        }
        return false;
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
    LinkList a;
    a.insertNode(3);
    a.insertNode(4);
    a.deleteNode();
    a.insertNode(5);
    a.print();
    return 0;
}
