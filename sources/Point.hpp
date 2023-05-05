#ifndef POINT_HPP
#define POINT_HPP

namespace ariel {
    class Point {
    private:
        double x;
        double y;
    public:
        Point(double x, double y);
        double getX();
        double getY();
        double distance(const Point& other);
        Point moveTowards(const Point& src, const Point& dest, double dist);
        void print();
    };
}

#endif 