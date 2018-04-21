#include <iostream>
#include "BSTree.h"
#include "TestCpp.h"
#include "gurobi_c++.h"

using namespace std;

void TestBTree();
void TestCPP();

int main() {
    bool is_test = 1;
    // run some cool functions
    if (is_test){
        TestCPP();
    } else {
        TestBTree();
    }

    return 0;
}

void TestBTree() {
    cout << "starting to test BSTree functions" << endl;
    BSTree bstree1 = BSTree();
    // insert test
    bstree1.insert(5);
    bstree1.insert(5);
    bstree1.insert(1);
    bstree1.insert(7);
    bstree1.insert(12);
    bstree1.insert(4);
    bstree1.insert(19);
    bstree1.insert(6);
    bstree1.insert(3);
    bstree1.insert(2);
    // find successor test
    // find pre successor test
    // delete test
    Node *root = bstree1.getRoot();
    cout << to_string(root->key) + to_string(root->leftChild->key) + to_string(root->rightChild->key) << endl;
};

void TestCPP(){
    TestCpp testCpp = TestCpp();
    testCpp.TestFunction1();
    testCpp.TestFunction2(2);
}