//
//  Laser.hpp
//  send2laser
//
//  Created by Momoha Matsuhashi on 2019/10/31.
//

#ifndef Laser_hpp
#define Laser_hpp

#include "ofMain.h"
#include "ofxOsc.h"

#define HOST "192.168.0.1"
//#define HOST "localhost"
#define PORT 10000

class Laser{
public:
    Laser();
    void update();
//    void setColor(int r, int g, int b);
    void drawPoint(float pos_x, float pos_y);
    void drawLine(float pos_x1, float pos_y1, float pos_x2, float pos_y2);
    void drawCircle(float pos_x, float pos_y, float width, float height);
    void drawRect(float pos_x, float pos_y, float width, float height);
    
private:
    ofxOscSender osc_sender;
};


#endif /* Laser_hpp */
