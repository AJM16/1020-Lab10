/* Program: Vector2D.cpp
** Description: implementation file for Vector2D class. Will need to
** 		add appropriate operator overloading functions to this file
*/

#include "Vector2D.h"

// default constructor
Vector2D::Vector2D(): x_coord(0), y_coord(0) {}

// constructor that takes 2 doubles
Vector2D::Vector2D(double x, double y): x_coord(x), y_coord(y) {}

// x coordinate setter
void Vector2D::setX(double newX)
{
    x_coord = newX;
}

// y coordinate setter
void Vector2D::setY(double newY)
{
    y_coord = newY;
}

// x coordinate getter
double Vector2D::getX()
{
    return x_coord;
}

// y coordinate getter
double Vector2D::getY()
{
    return y_coord;
}

