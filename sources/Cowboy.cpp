#include "Cowboy.hpp"

namespace ariel
{
    Cowboy::Cowboy(const std::string& name, const Point& location, int hp)
        : Character(name, location, hp), bullets(6)
    {}

    Cowboy::Cowboy(const std::string& name, const Point& location)
        :Character(name, location), bullets(6)
    {}

    void Cowboy::shoot(Character* enemy){}

    bool Cowboy::hasbullets() const{
        return bullets > 0;
    }

    void Cowboy::reload(){
        bullets = 6;
    }

    
    
}
