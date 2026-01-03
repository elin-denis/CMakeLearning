#include <cassert>
#include "Utils/Math.h"
#include "FightClubGame/Game/Character.h"

int main()
{
    using namespace CMakeLearning;

    assert(max(3, 0) == 3);
    assert(max(-3, 0) == 0);

    Character hero("Pacman");
    assert(!hero.dead());

    hero.takeDamage(10);
    assert(!hero.dead());

    hero.takeDamage(10000);
    assert(hero.dead());

    return 0;
}