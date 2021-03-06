#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    for (int i = 0; i < 1000; i++){
        balls[i].setup();
    }
    
    
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    
    for (int i = 0; i < 1000; i++){
        balls[i].update();
    }
    
    if (ofGetMousePressed() == true){
        for (int i = 0; i < 1000; i++){
            balls[i].pos.x = mouseX;
            balls[i].pos.y = mouseY;
        }
    }
    

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(0);
    
    
    for (int i = 0; i < 1000; i++){
        balls[i].draw();
    }
    
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
