#include "Ninja.hpp"

namespace ariel
{
    Ninja::Ninja(const std::string& name, const Point& location, int hp, int speed)
        : Character(name, location, hp), speed(speed)
    {}

    int Ninja::getSpeed(){
        return this->speed;
    }

    void Ninja::move(Character* enemy){}

    void Ninja::slash(Character* enemy){} 
}
