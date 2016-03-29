/* File: Driver.cpp
** Description: used to illustrate the use of operator overloading. NO changes
** 		needed for this file
*/
#include "Vector2D.h"

int main()
{
    Vector2D v1(2,3), v2(4, 5), v3, v4; // intialize 4 vector2D objects

    // equality operator overload
    if(v3 == v4)
	cout << "v3 is equal to v4 at the start of the program" << endl;

    // addition operator overload
    v4 = v1 + v2;

    // output stream operation overload
    cout << "v1 + v2 = " << v4 << endl;

    return 0;
}
