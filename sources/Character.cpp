#include "Character.hpp"
#include "Point.hpp"
#include <iostream>
#include <cmath>
using namespace std;

namespace ariel{


Character::Character(const string& name, const Point& location, int hitp)
    : name(name), location(location), hitp(hitp)
{}

Character::Character(const string& name, const Point& location)
    : name(name), location(location)
{}

int Character::getHP(){
    return  this->hitp;
}

string Character::getName(){
    return this->name;
}

 

bool Character::isAlive(){
    return hitp > 0;
}

double Character::distance(const Character* other) const {
    return 1.1;
}

void Character::hit(int amount) {
    hitp -= amount;
}



const Point& Character::getLocation() const {
    return location;
}

string Character::print(){
    return "hii";
}

}