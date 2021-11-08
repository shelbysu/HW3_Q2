#ifndef POLYGON_H
#define POLYGON_H

class Polygon
{
public:
    Polygon();
    Polygon(int newWidth, int newHeight);
    void setWidth(int newWidth);
    void setHeight(int newHeight);
    virtual int getArea() = 0;
    virtual void draw() = 0;
    //int getArea();
    //void draw();

protected:
    int width = 0;
    int height = 0;

};

#endif // POLYGON_H




