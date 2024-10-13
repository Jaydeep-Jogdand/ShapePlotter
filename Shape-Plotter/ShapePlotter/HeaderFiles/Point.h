#ifndef POINT_H
#define POINT_H
#include"Shape.h"


class Point {
public:
    double x;
    double y;

    Point(double a = 0, double b = 0);

    void CreatePoint();
    void draw();
    ~Point();

};

#endif 