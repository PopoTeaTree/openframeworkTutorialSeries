//
//  Circle.cpp
//  018_parameter
//
//  Created by Thitiporn Sukpartcharoen on 10/3/2566 BE.
//

#include "Circle.hpp"

void Circle::setup(){
    params.setName("circle params");
    params.add(x.set("x", ofGetWidth()/2, 0,ofGetHeight()/2));
    params.add(y.set("y", ofGetHeight()/2, 0,ofGetWidth()/2));
    params.add(colors.set("colors", ofVec3f(100,130,160), ofVec3f(0,0,0), ofVec3f(255,255,255)));
}
