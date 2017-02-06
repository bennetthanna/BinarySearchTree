#include "ofApp.h"
#include "Node.h"


//--------------------------------------------------------------
void ofApp::setup(){
    tree = Node(512, 100);
    ofBackground(15);
}

//--------------------------------------------------------------
void ofApp::update(){
    tree.move();
}

//--------------------------------------------------------------
void ofApp::draw(){
    tree.draw();
    ofSetColor(200, 200, 200);
    ofDrawBitmapString("In Order: " + tree.inOrder(), 50, ofGetHeight()-300);
    ofDrawBitmapString("Pre Order: " + tree.preOrder(), 50, ofGetHeight()-200);
    ofDrawBitmapString("Post Order: " + tree.postOrder(), 50, ofGetHeight()-100);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    this->tree.add(new Node());
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
