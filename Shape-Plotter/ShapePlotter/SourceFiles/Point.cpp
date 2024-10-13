#include "Point.h"
#include "Shape.h"
#include <iostream>
#include<fstream>
using namespace std;

Point::Point(double a, double b)
{
    this->x = a;
    this->y = b;

}
void Point::CreatePoint()
{
    std::ofstream outFile("shapes.dat", std::ios::trunc);
    outFile << x << " " << y << endl;

}
void Point::draw()
{
    // cout<<"Point draw "<<endl;
}

Point::~Point()
{
    // cout<<"Point Destructor"<<endl;
}


