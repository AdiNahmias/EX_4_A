#ifndef POINT_HPP
#define POINT_HPP

namespace ariel {
    class Point {
    private:
        double p_x;
        double p_y;
    public:
        Point(double p_x, double p_y);
        double getX();
        double getY();
        double distance(const Point& other);
        Point moveTowards(const Point& src, const Point& dest, double dist);
        void print();
    };
}

#endif 