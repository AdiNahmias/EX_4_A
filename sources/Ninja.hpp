#ifndef NINJA_HPP
#define NINJA_HPP

#include "Character.hpp"

namespace ariel
{
    class Ninja : public Character
    {
    private:
        int speed;
    public:
        Ninja(const std::string& name, const Point& location, int hp, int speed);
        void move(Character* enemy);
        void slash(Character* enemy);
    };
}

#endif