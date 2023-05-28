#include "Item.hpp"

Item::Item() {
    this->name = "";
    this->description = "";
    this->rare = Item::rarity::COMMON;
    std::cout << "item " << this << " is now created\n";
}

Item::~Item() {
    std::cout << "item " << this << " is now deleted\n";
}


std::string Item::getName() {
    return this->name;
}

std::string Item::getDescription() {
    return this->description;
}

Item::rarity Item::getRarity() {
    return this->rare;
}

std::string Item::setName(std::string name) {
    std::cout << "the name of item " << this << " is now " << name << "\n"; 
    this->name = name;
}

std::string Item::setDescription(std::string description) {
    std::cout << "the description of item " << this << " is now " << description << "\n"; 
    this->description = description;
}

Item::rarity Item::setRarity(rarity rare) {
    std::cout << "the rarity of item " << this << " is now " << rare << "\n"; 
    this->rare = rare;
}

void Item::presentation() {
    std::cout << this->name << " : " << this->presentationRarity() << "\n\t" << description << std::endl;
}

std::string Item::presentationRarity() {
    if (this->rare == Item::rarity::COMMON)
        return "Common\n";
        
    if (this->rare == Item::rarity::UNCOMMON)
        return "Uncommon\n";
        
    if (this->rare == Item::rarity::RARE)
        return "Rare\n";
        
    if (this->rare == Item::rarity::LEGENDARY)
        return "Legendary\n";
        
    if (this->rare == Item::rarity::UNCOMMON)
        return "Unique\n";
}
