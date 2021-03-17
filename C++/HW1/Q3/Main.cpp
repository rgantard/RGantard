#include "Circle.cpp"
#include <iostream>
#include <string>

int Main()
{
    Circle database[3];
    int counter=0;
    int aCounter = 0, bCounter = 0, cCounter = 0;
    int x, y, r;
    std::string temp;

    while (counter<3)
    {
        std::cout << "enter the center point and radius of 3 circles:" << std::endl;
        std::cin >> temp >> r;
        x = temp[1];
        y = temp[3];
        Circle::Point center(x, y); 
        database[counter].setCenter(x,y);
        database[counter].setR(r);
        counter++;
    }
    std::cout << "perimeter:" << "   " << "A: " << database[0].circumference() << "  " <<
    "B: " << database[1].circumference() << "   " << "C: " << database[2].circumference() << std::endl;

    std::cout << "area:" << "   " << "A: " << database[0].area() << "   " << "B: " << database[1].area()
    << "    " << "C: " << database[2].area() << std::endl;

    std::cout << "enter points until (0,0):" << std::endl;
    while(true)
    {
        std::cin >> temp >> r;
        x = temp[1];
        y = temp[3];
        if(x==0 && y==0)
        {
            break;
        }
        Circle::Point inputPoint(x, y);

        if(database[0].isWithin(inputPoint)<=0)
        aCounter++;

        if(database[1].isWithin(inputPoint)<=0)
        bCounter++;

        if(database[2].isWithin(inputPoint)<=0)
        cCounter++;
    }

    std::cout << "num of points in circle:  " << "A:" << aCounter << "  " << "B:" << bCounter << "  "
    << "C:" << cCounter << std::endl;
}