#include "Point.hpp"
#include <cmath>

namespace ariel
{
    Point::Point(double x, double y){
        this->x = x;
        this->y = y;
    }

    double Point::getX(){
        return this->x;
    }

    double Point::getY(){
        return this->x;
    }


    double Point::distance(const Point &other){
       
        return 1.0;
    }

    Point Point::moveTowards(const Point &src, const Point &dest, double dist){
       
        return Point(1.0, 1.0);
    }

    void Point::print(){
    
    }
}
