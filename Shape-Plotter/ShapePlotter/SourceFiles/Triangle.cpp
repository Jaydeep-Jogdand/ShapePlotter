#include "Triangle.h"
#include <iostream>
#include<fstream>
using namespace std;
Triangle::Triangle()
{
    cout << "Triangle Constructor Called" << endl;
}
void Triangle::createTriangle(Point p1, Point p2, Point p3)
{
    std::ofstream outFile("shapes.dat", std::ios::trunc);
    outFile << p1.x << " " << p1.y << std::endl; // First vertex
    outFile << p2.x << " " << p2.y << std::endl; // Second vertex
    outFile << p3.x << " " << p3.y << std::endl; // Third vertex
    outFile << p1.x << " " << p1.y << std::endl; // Closing the triangle
}
Triangle::~Triangle()
{
    cout << " Triangle Destructor Called " << endl;
}


