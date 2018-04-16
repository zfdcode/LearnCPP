//
// Created by Fngd Z on 2018/4/16.
//

#ifndef LEARNCPP_TREE_H
#define LEARNCPP_TREE_H

#include <iostream>

using namespace std;

class Node {
public:
    int key;
    Node *leftChild;
    Node *rightChild;

    explicit Node(int key);

    bool has_child();
};

class BSTree {
public:
    BSTree();

    Node *find(int key, Node *node);

    void insert(int key);

    void print_bstree();

    Node *getRoot() const;

private:
    Node *root;
};

#endif //LEARNCPP_TREE_H
