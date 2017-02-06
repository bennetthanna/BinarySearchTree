#pragma once
#include <string>
#include "ofMain.h"

class Node {
    
public:

    double x;
    double y;
    double theta;
    ofColor color;
    
    int value;
    std::string traversal;
    Node* left;
    Node* right;
    
    Node();
    Node(int x, int y);
    ~Node();
    
    void draw();
    void move();
    
    void add(Node *n);
    
    std::string inOrder();
    std::string preOrder();
    std::string postOrder();
    
};
