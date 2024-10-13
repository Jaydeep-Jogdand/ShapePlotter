# Shape Plotter

## Overview
This project is a console-based application that allows users to create various geometric shapes such as points, lines, triangles, squares, rectangles, circles, and polygons. The shapes are created based on user input, and their coordinates are stored in a file named `shapes.dat`. The project implements object-oriented programming concepts and file handling for shape plotting.

## Features
- Create and store geometric shapes:
  - Points
  - Lines
  - Triangles
  - Squares
  - Rectangles
  - Circles
  - Polygons
- User-friendly menu-driven interface.
- Save the coordinates of the shapes into a file (`shapes.dat`).
  
## Project Structure

- **Point**: Represents a 2D point with `x` and `y` coordinates.
- **Line**: Represents a line segment connecting two points.
- **Circle**: Represents a circle with a center point and a radius.
- **Triangle**: Represents a triangle formed by three points.
- **Square**: Represents a square with a center point and a given side length.
- **Rectangle**: Represents a rectangle defined by two opposite corner points.
- **Polygon**: Represents a polygon defined by multiple vertices.
- **Manager**: Handles user inputs and provides options to create different shapes.


## File Descriptions
- **Shapeplotter.cpp**: The main file that drives the program through user interaction.
- **Manager.h / Manager.cpp**: Handles user input for creating various shapes.
- **Point.h / Point.cpp**: Defines the Point class.
- **Line.h / Line.cpp**: Defines the Line class.
- **Circle.h / Circle.cpp**: Defines the Circle class.
- **Triangle.h / Triangle.cpp**: Defines the Triangle class.
- **Square.h / Square.cpp**: Defines the Square class.
- **Rectangle.h / Rectangle.cpp**: Defines the Rectangle class.
- **Polygon.h / Polygon.cpp**: Defines the Polygon class.


## How to Run

1. **Compile the Project:**
   - Use your favorite IDE or compiler (e.g., Visual Studio, g++) to compile the project files.

2. **Run the Program:**
   - The program will display a menu that allows users to create different shapes.
   - After creating a shape, its coordinates will be saved to a file (`shapes.dat`).

3. **View the Output:**
   - Coordinates of the shapes are written to `shapes.dat`. You can use any text editor to view the file.

## Example Commands

1. **Create a Point:**
   - Enter `1` in the menu.
   - Input coordinates (x, y).

2. **Create a Line:**
   - Enter `2` in the menu.
   - Input two points (x1, y1) and (x2, y2).

3. **Create a Circle:**
   - Enter `6` in the menu.
   - Input the center point and radius.

4. **Create a Polygon:**
   - Enter `7` in the menu.
   - Input the number of points and their coordinates.

## Dependencies
- Standard C++ libraries (`iostream`, `fstream`).
  

