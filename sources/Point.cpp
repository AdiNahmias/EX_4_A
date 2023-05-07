#include "Point.hpp"
#include <cmath>

namespace ariel
{
    Point::Point(double p_x, double p_y){
        this->p_x = p_x;
        this->p_y = p_y;
    }

    double Point::getX(){
        return this->p_x;
    }

    double Point::getY(){
        return this->p_y;
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
