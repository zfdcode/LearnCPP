#include <iostream>
#include "BSTree.h"
#include "TestCpp.h"
#include "BookCPP.h"
#include "gurobi_c++.h"
#include "Gurobi.h"

using namespace std;

void TestBTree();
void TestCPP();
void TestGurobi();

int main() {
    //TestCPP();
    //TestBTree();
    TestGurobi();
    return 0;
}

void TestBTree() {
    cout << "starting to test BSTree functions" << endl;
    BSTree bstree1 = BSTree();
    // insert test
    bstree1.insert_key(5);
    bstree1.insert_key(5);
    bstree1.insert_key(1);
    bstree1.insert_key(7);
    bstree1.insert_key(12);
    bstree1.insert_key(4);
    bstree1.insert_key(19);
    bstree1.insert_key(6);
    bstree1.insert_key(3);
    bstree1.insert_key(2);
    bstree1.show_bstree();
    // find successor test
    // find pre successor test
    // delete test
    //Node *root = bstree1.getRoot();
    //cout << to_string(root->key) + to_string(root->leftChild->key) + to_string(root->rightChild->key) << endl;
};

void TestCPP(){
    TestCpp testCpp = TestCpp();
    testCpp.TestFunction1();
    testCpp.TestFunction2(2);
}

void TestGurobi() {
    Gurobi gurobi = Gurobi();
    gurobi.test();

}