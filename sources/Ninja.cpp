#include "Ninja.hpp"

namespace ariel
{
    Ninja::Ninja(const std::string& name, const Point& location, int hitp, int speed)
        : Character(name, location, hitp), speed(speed)
    {}

    int Ninja::getSpeed(){
        return this->speed;
    }

    void Ninja::move(Character* enemy){}

    void Ninja::slash(Character* enemy){} 
}
