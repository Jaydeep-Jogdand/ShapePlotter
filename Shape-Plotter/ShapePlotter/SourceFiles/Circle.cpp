#include <iostream>
#include <fstream>
#include <cmath>
#include "Circle.h"
#include "Point.h"
using namespace std;

Circle::Circle(Point center, double radius)
{
    this->center = center;
    this->radius = radius;
}
void Circle::CreatCircle()
{
    cout << "Circle Center Point x and y " << center.x << " " << center.y << endl;

    double x = center.x; // x-coordinate of center
    double y = center.y; // y-coordinate of center
    double r = this->radius; // radius
    int numPoints = 100;

    std::ofstream outFile("shapes.dat", std::ios::trunc);

    for (int i = 0; i <= numPoints; ++i) {

        double x = 0.0;
        double y = 0.0;
        double t = (2 * 3.14 * i) / numPoints; // Parameter t
        x = x + r * cos(t);
        y = y + r * sin(t);
        outFile << x << " " << y << std::endl; // Write points to the file4
    }

    outFile.close();
    std::cout << "Circle data written to shapes.dat" << std::endl;
}
void Circle::draw()
{
    cout << "Draw Circle " << endl;
}

Circle::~Circle() {
    //cout << "Circle Destructor called" << endl;
}


