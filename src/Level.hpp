#ifndef __LEVEL_H__
#define __LEVEL_H__

#include <fstream>
#include <vector>
#include "Platform.hpp"
#include "Creature.hpp"

class Level
{
private:
    std::vector < Creature > creatures; // вектор НИПов
    Creature hero;                      // персонаж
    std::vector < Platform > platforms; // платформы чтобы прыгать
public:
    Level(Creature _hero):
        creatures(), hero(_hero), platforms() {}
    void addPlatform(Platform p);
    void addCreature(Creature c);
    std::vector < Platform > getPlatforms();
};

void Level::addPlatform(Platform p) { platforms.push_back(p); }

void Level::addCreature(Creature c) { creatures.push_back(c); }

std::vector < Platform > Level::getPlatforms() { return platforms; }

#endif
