#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <iostream>
#include <string>
#include <sstream>
#include "Point.hpp"
using namespace std;

namespace ariel
{
    class Character{
    private:
    string name;
    Point location;
    int hp;
        

    public:
    Character(const string& name, const Point& location, int hp);
    Character(const string& name, const Point& location);
    int getHP();
    string getName();
    bool isAlive();
    double distance(const Character* other) const;
    void hit(int amount);
    const Point& getLocation() const;
    void print();
       
    };
}

#endif 