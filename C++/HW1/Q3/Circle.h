#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{
    public:
    class Point
    {
        private:
        int _xp, _yp;

        public:
        Point(int x, int y);
        Point();
        void setX(int x);
        void setY(int y);
        int getX();
        int getY();
    };
    Circle(int x, int y, int r);
    Circle();
    void setR(int r);
    void setCenter(int x, int y);
    int getR();
    Circle::Point getCenter();
    float area();
    float circumference();
    int isWithin(Circle::Point p);

    private:
    int _r, _x, _y;
    Circle::Point _center;
};
#endif