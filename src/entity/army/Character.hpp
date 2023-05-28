class Character {
public:
    typedef struct stats {
        int agility;
        int movement_speed;
        int strength;
        int resistance;
    } stats;

public:

protected:
    int hp;
    stats stat;
    
};