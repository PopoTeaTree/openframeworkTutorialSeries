//
//  Circle.hpp
//  018_parameter
//
//  Created by Thitiporn Sukpartcharoen on 10/3/2566 BE.
//

#ifndef Circle_hpp
#define Circle_hpp

#include "ofMain.h"

class Circle {
public:
    void setup();
    
    ofParameterGroup params;
    ofParameter<ofVec3f> colors;
    ofParameter<int> x;
    ofParameter<int> y;
};

#endif /* Circle_hpp */
