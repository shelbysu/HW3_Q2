//
// Created by Shelby on 11/7/2021.
//

#ifndef SHELBYSU_HW3_Q2_RECTANGLE_H
#define SHELBYSU_HW3_Q2_RECTANGLE_H

#include "Polygon.h"

class Rectangle:public Polygon {
public:
    Rectangle();
    Rectangle(int newHeight, int newWidth){height=newHeight; width=newWidth;}
    virtual int getArea(){return(height*width);}
    virtual void draw();

};


#endif //SHELBYSU_HW3_Q2_RECTANGLE_H
