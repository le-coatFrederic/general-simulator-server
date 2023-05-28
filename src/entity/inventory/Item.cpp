#include "Item.hpp"

Item::Item() {
    this->name = "";
    this->description = "";
    this->rare = rarity::COMMON;
    std::cout << "Item " << this << " is created\n";
}

Item::~Item() {
    std::cout << "Item " << this << " is deleted\n";
}


std::string Item::getName() {
    return this->name;
}

std::string Item::getDescription() {
    return this->description;
}

rarity Item::getRarity() {
    return this->rare;
}

void Item::setName(std::string name) {
    std::cout << "the name of item " << this << " is now " << name << "\n"; 
    this->name = name;
}

void Item::setDescription(std::string description) {
    std::cout << "the description of item " << this << " is now " << description << "\n"; 
    this->description = description;
}

void Item::setRarity(rarity rare) {
    std::cout << "the rarity of item " << this << " is now " << rare << "\n"; 
    this->rare = rare;
}

void Item::presentation() {
    std::cout << "{" << this->name << " : " << this->presentationRarity() << " (" << description << ")}" << std::endl;
}

std::string Item::presentationRarity() {
    if (this->rare == rarity::COMMON)
        return "Common";
        
    if (this->rare == rarity::UNCOMMON)
        return "Uncommon";
        
    if (this->rare == rarity::RARE)
        return "Rare";
        
    if (this->rare == rarity::LEGENDARY)
        return "Legendary";
        
    if (this->rare == rarity::UNCOMMON)
        return "Unique\n";
}
