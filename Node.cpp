#include "Node.h"
#include "ofMain.h"
#include <string>

Node::Node(){
    x = 0;
    y = 0;
    color = ofColor(ofRandom(255), ofRandom(255), ofRandom(255));
    value = ofRandom(1000);
    right = NULL;
    left = NULL;
}

Node::Node(int x, int y){
    this->x = x;
    this->y = y;
    color = ofColor(ofRandom(255), ofRandom(255), ofRandom(255));
    left = NULL;
    right = NULL;
    value = ofRandom(1000);
}

Node::~Node(){
    delete left;
    delete right;
}


void Node::draw(){
    ofSetColor(color);
    ofDrawCircle(x, y, 50);
    ofSetColor(0);
    ofDrawBitmapString(std::to_string(this->value), x, y);
    
    if (this->left != NULL){
        this->left->draw();
        this->left->move();
    } if (this->right != NULL){
        this->right->draw();
        this->right->move();
    }
}

void Node::move() {
    y += 0.9 * cos(theta);
    theta += 0.1;
}

void Node::add(Node *n){
    ofLog(OF_LOG_NOTICE, "insert");
    if (n->value <= this->value){
        if (this->left == NULL){
            left = n;
            n->x = this->x - 100;
            n->y = this->y + 100;
        } else {
            this->left->add(n);
        }
    } else if (n->value > this->value){
        if(this->right == NULL){
            right = n;
            n->x = this->x + 100;
            n->y = this->y + 100;
        } else {
            this->right->add(n);
        }
    }
}

string Node::inOrder(){
    std::string traversal = "";
    if(this->left != NULL){
        traversal.append(this->left->inOrder());
    }
    traversal.append(std::to_string(this->value) + ", ");
    if(this->right != NULL){
        traversal.append(this->right->inOrder());
    }
    return traversal;
}


string Node::preOrder(){
    std::string traversal = "";
    traversal.append(std::to_string(this->value) + ", ");
    if(this->left != NULL){
        traversal.append(this->left->inOrder());
    }
    if(this->right != NULL){
        traversal.append(this->right->inOrder());
    }
    return traversal;
}

string Node::postOrder(){
    std::string traversal = "";
    if(this->left != NULL){
        traversal.append(this->left->inOrder());
    }
    if(this->right != NULL){
        traversal.append(this->right->inOrder());
    }
    traversal.append(std::to_string(this->value) + ", ");
    return traversal;
}




