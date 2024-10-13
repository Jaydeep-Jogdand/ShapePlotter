#include "Manager.h"

void Manager::handleUserInput() {
    int choice;
    do {
        std::cout << "Menu:\n";
        std::cout << "1. Create Point\n";
        std::cout << "2. Create Line\n";
        std::cout << "3. Create Triangle\n";
        std::cout << "4. Create Square\n";
        std::cout << "5. Create Rectangle\n";
        std::cout << "6. Create Circle\n";
        std::cout << "7. Create Polygon\n";
        std::cout << "8. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1: {   // create Point 

            int x, y;
            std::cout << "Enter Point co-ordinate (x,y) :";
            std::cin >> x >> y;
            Point p1(x, y);
            p1.CreatePoint();
            break;
        }

        case 2: {  // Create Line 

            double x1, y1, x2, y2;
            std::cout << "Enter first point (x1 y1) and second point (x2 y2): ";
            std::cin >> x1 >> y1 >> x2 >> y2;
            Point p1(x1, y1), p2(x2, y2);
            Line l1;
            l1.createLine(p1, p2);
            break;
        }

        case 3: {    // Create Triangle 

            double x1, y1, x2, y2, x3, y3;
            std::cout << "Enter three points (x1 y1, x2 y2, x3 y3): ";
            std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
            Point p1(x1, y1), p2(x2, y2), p3(x3, y3);
            Triangle t1;
            t1.createTriangle(p1, p2, p3);

            break;
        }

        case 4: {  // Create Square
            double x, y, side;
            std::cout << "Enter the center point (x y) and side length of the square: ";
            std::cin >> x >> y >> side;
            Point p1(x, y);
            Square s;
            s.createSquare(p1, side);

            break;
        }

        case 5: {   // Create Rectangle 

            int x1, y1, x2, y2;
            std::cout << "Enter bottom-left corner (x1 y1) and top-right corner (x2 y2): ";
            std::cin >> x1 >> y1 >> x2 >> y2;
            Point p1(x1, y1), p2(x2, y2);
            Rectangle r1(p1, p2);
            r1.CreatRectangle(p1, p2);

            break;
        }

        case 6: {   //Create Circle
            int x, y, r;
            std::cout << "Enter center point (x y) and radius: ";
            std::cin >> x >> y >> r;
            Point p1(x, y);
            Circle c1(p1, r);
            c1.CreatCircle();


            break;
        }
        case 7: { //Create Polygon 
            int numPoints;
            std::cout << "Enter the number of points for the polygon: ";
            std::cin >> numPoints;

            Polygon poly;
            for (int i = 0; i < numPoints; ++i) {
                double x, y;
                std::cout << "Enter coordinates of vertex " << i + 1 << " (x y): ";
                std::cin >> x >> y;
                Point p(x, y);  // Create Point object for each vertex
                poly.addVertex(p);  // Add it to the polygon
            }

            poly.createPolygon();


            break;
        }
        case 8: {  // Exit
            std::cout << "Exiting program...\n";
            return;
        }

        default:
            std::cout << "Invalid choice. Please try again.\n";
        }
    } while (true);
}


