#ifndef ITEM_HPP
#define ITEM_HPP

#include <string>
#include <iostream>
#include <memory>

typedef enum rarity {
    COMMON, UNCOMMON, RARE, LEGENDARY, UNIQUE
} rarity;

class Item {
public:
    Item();
    ~Item();

    std::string getName();
    std::string getDescription();
    rarity getRarity();

    void setName(std::string name);
    void setDescription(std::string description);
    void setRarity(rarity rare);

    void presentation();
    std::string presentationRarity();

protected:
    std::string name;
    std::string description;
    rarity rare;
};

typedef std::shared_ptr<Item> ItemPTR;

#endif