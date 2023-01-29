#include <iostream>

using namespace std;

class BST {
    class Node {
    public:
        int key;
        Node *left, *right;

        Node(int n) {
            key = n;
            left = right = nullptr;
        }
    } * root = nullptr;
public:
    ~BST() {
        cout << "Deallocating all memory allocated for nodes using postOrder." << endl;
        postOrderDeletion(root);
    }
    void insertNode(int n) {
        root = insertNode(n, root);
    }
    Node * insertNode(int n, Node * ptr) {
        if (!ptr) {
            ptr = new Node(n);
            return ptr;
        }
        else if (n <= ptr->key) {
            ptr->left = insertNode(n, ptr->left);
        }
        else if (n > ptr->key) {
            ptr->right = insertNode(n, ptr->right);
        }
        return ptr;

    }
    Node * minVal (Node * ptr) {
        while (ptr && ptr->left) {
            ptr = ptr -> left;
        }
        return ptr;
    }
    void deleteNode(int n) {
        root = deleteNode(n, root);
    }
    Node * deleteNode(int n, Node * ptr) {
        if (!ptr) return ptr;
        if(ptr->key > n){
            ptr->left = deleteNode(n, ptr->left);
        }
        else if(ptr->key < n){
            ptr->right = deleteNode(n, ptr->right);
        }
        else if (!(ptr->left || ptr->right)) {
            delete ptr;
            return nullptr;
        }
        else if (!ptr->left) {
            delete ptr;
            return ptr->right;
        }
        else if (!ptr->right)
        {
            delete ptr;
            return ptr->left;
        }
        else {
            Node * temp = minVal(ptr->right);
            ptr->key = temp->key;
            ptr->right = deleteNode(temp->key, ptr->right);
            return ptr;
        }
        return ptr;
        
    }
    
    void inOrder() {
        cout << "Following are the elements of Binary Search Tree in Inorder:" << endl;
        inOrder(root);
    }
    void inOrder(Node * ptr) {
        if (ptr) {
            inOrder(ptr->left);
            cout << ptr->key << endl;
            inOrder(ptr->right);
        }
    }
    void postOrderDeletion(Node * ptr) {
        if (!ptr) return;
        postOrderDeletion(ptr->left);
        postOrderDeletion(ptr->right);
        cout << "Deleted Node with value " << ptr->key << endl;
        delete ptr; 
    }
};

int main() {
    BST a;
    a.insertNode(10);
    a.insertNode(5);
    a.insertNode(15);
    a.insertNode(11);
    a.insertNode(20);
    a.insertNode(6);
    a.insertNode(13);
    a.deleteNode(15);
    a.inOrder();
    return 0;
}