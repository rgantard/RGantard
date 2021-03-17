#include "Circle.h"
#include <math.h>
#define pi 3.14

Circle::Point::Point(int x, int y)
{
    _xp=x;
    _yp=y;
}
Circle::Point::Point()
{
    _xp=1;
    _yp=1;
}
Circle::Circle(int x, int y, int r)
{
    Point _center(x,y);
    _r = r;
}
Circle::Circle(){};
void Circle::Point::setX(int x)
{
    _xp = x;
}
void Circle::Point::setY(int y)
{
    _yp = y;
}
int Circle::Point::getX()
{
 return _xp;
}
int Circle::Point::getY()
{
    return _yp;
}
void Circle::setR(int r)
{
    _r = r;
}
void Circle::setCenter(int x, int y)
{
    Point Center = Point(x,y);
    _center = Center;
}
int Circle::getR()
{
    return _r;
}
Circle::Point Circle::getCenter()
{
    return _center;
}
float Circle::area()
{
    return pow(_r,2)*pi;
}
float Circle::circumference()
{
    return 2*pi*_r;
}
int Circle::isWithin(Circle::Point p)
{
    int x1, y1, x, y;
    float d;
    x1 = p.getX();
    y1 = p.getY();
    x = this->getCenter().getX();
    y = this->getCenter().getY();
    d = sqrt(pow((x1-x),2)+pow((y1-y),2));
   if(_r>d)
   {
       return -1;
   }
   if(_r<d)
   {
       return 1;
   }
   if(_r==d)
   {
       return 0;
   }
}