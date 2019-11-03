//
//  Laser.cpp
//  send2laser
//
//  Created by Momoha Matsuhashi on 2019/10/31.
//

#include "Laser.hpp"

Laser::Laser() {
    osc_sender.setup(HOST, PORT);
    
}

void Laser::drawPoint(float pos_x, float pos_y) {
    ofxOscMessage m;
    m.setAddress("/point");
    m.addFloatArg(pos_x);
    m.addFloatArg(pos_y);
    osc_sender.sendMessage(m);
}

void Laser::drawLine(float pos_x1, float pos_y1, float pos_x2, float pos_y2) {
    ofxOscMessage m;
    m.setAddress("/line");
    m.addFloatArg(pos_x1);
    m.addFloatArg(pos_y1);
    m.addFloatArg(pos_x2);
    m.addFloatArg(pos_y2);
    osc_sender.sendMessage(m);
}

void Laser::drawCircle(float pos_x, float pos_y, float width, float height) {
    ofxOscMessage m;
    m.setAddress("/circle");
    m.addFloatArg(pos_x);
    m.addFloatArg(pos_y);
    m.addFloatArg(width);
    m.addFloatArg(height);
    osc_sender.sendMessage(m);
}

void Laser::drawRect(float pos_x, float pos_y, float width, float height) {
    ofxOscMessage m;
    m.setAddress("/rect");
    m.addFloatArg(pos_x);
    m.addFloatArg(pos_y);
    m.addFloatArg(width);
    m.addFloatArg(height);
    osc_sender.sendMessage(m);
}
