//
// Created by Shelby on 11/7/2021.
//

#ifndef SHELBYSU_HW3_Q2_TRIANGLE_H
#define SHELBYSU_HW3_Q2_TRIANGLE_H
#include "Polygon.h"

class Triangle:public Polygon {
public:
    Triangle();
    Triangle(int newHeight, int newWidth){height=newHeight; width=newWidth;}
    virtual int getArea(){return((width*height)/2);}
    virtual void draw();

protected:
};


#endif //SHELBYSU_HW3_Q2_TRIANGLE_H
