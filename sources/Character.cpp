#include "Character.hpp"
#include "Point.hpp"
#include <iostream>
#include <cmath>
using namespace std;

namespace ariel{


Character::Character(const string& name, const Point& location, int hp)
    : name(name), location(location), hp(hp)
{}

Character::Character(const string& name, const Point& location)
    : name(name), location(location)
{}

 

bool Character::isAlive() const {
    return hp > 0;
}

double Character::distance(const Character* other) const {
    return 1.1;
}

void Character::hit(int amount) {
    hp -= amount;
}

const std::string& Character::getName() const {
    return name;
}

const Point& Character::getLocation() const {
    return location;
}

void Character::print(){}

}