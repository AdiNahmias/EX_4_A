#include "Cowboy.hpp"

namespace ariel
{
    Cowboy::Cowboy(const std::string& name, const Point& location)
        : Character(name, location, 110), bullets(6)
    {}


    int Cowboy::getBullet(){
        return this->bullets;
    }


    void Cowboy::shoot(Character* enemy){}

    bool Cowboy::hasbullets() const{
        return bullets > 0;
    }

    void Cowboy::reload(){
        bullets = 6;
    }

    string Cowboy::print(){

        return "adii";
    }

    
    
}
