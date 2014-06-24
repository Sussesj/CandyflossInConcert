#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    myPlayer.loadMovie("woa.gif");

}

//--------------------------------------------------------------
void ofApp::update(){
    
     myPlayer.update(); // get all the new frames
}

//--------------------------------------------------------------
void ofApp::draw(){

    myPlayer.draw(100,100); // draw at 20, 20 from the current transform matrix
	
    myPlayer.play();
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

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

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
