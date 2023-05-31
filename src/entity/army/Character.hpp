#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "../inventory/Inventory.hpp"

typedef struct stats {
    int agility;
    int movement_speed;
    int strength;
    int resistance;
} stats;

class Character {
public:

protected:
    int hp;
    stats stat;
    InventoryPTR inventory;
};

#endif