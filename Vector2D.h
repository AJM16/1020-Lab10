/* Program: Vector2D.h
** Description: header file for Vector2D class. Will need to add operator
**		overloading function prototypes to this
*/

#ifndef VECTOR2D_H
#define VECTOR2D_H

#include <iostream>
using namespace std;

class Vector2D
{
   private:
	double x_coord, y_coord;
   public:
	Vector2D();
	Vector2D(double x, double y);
 	void setX(double newX);
	void setY(double newY);
	double getX();
	double getY();
};
#endif
