//
// Created by Fngd Z on 2018/4/16.
//

#ifndef LEARNCPP_TREE_H
#define LEARNCPP_TREE_H

#include <iostream>

using namespace std;

class Node {
public:
    Node(int key, Node *parent);

    int key;
    Node *parent;
    Node *leftChild;
    Node *rightChild;


    bool has_child();
};

class BSTree {
private:
    Node *root;
public:
    BSTree();

    Node *find(int key, Node *node);

    void insert_key(int key);

    Node *getRoot() const;

    Node *find_successor(Node *node);


    void show_bstree();

    void delete_key(int key);

    void show_bstree_helper(Node *node);
};

#endif //LEARNCPP_TREE_H
