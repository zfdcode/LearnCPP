#include <iostream>
#include "BSTree.h"

using namespace std;

void TestBTree();

int main() {
    cout << "Hello, World!" << endl;
    TestBTree();
    return 0;
}

void TestBTree() {
    cout << "starting to test BSTree functions" << endl;
    BSTree bstree1 = BSTree();
    bstree1.insert(5);
    bstree1.insert(5);
    bstree1.insert(1);
    bstree1.insert(7);
    Node *root = bstree1.getRoot();
    cout << to_string(root->key) + to_string(root->leftChild->key) + to_string(root->rightChild->key) << endl;
};