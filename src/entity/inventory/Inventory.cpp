#include "Inventory.hpp"

Inventory::Inventory() {
    std::cout << "Inventory " << this << " is created\n";
}

Inventory::~Inventory() {
    std::cout << "Inventory " << this << " is deleted\n";
}


int Inventory::getSize() {
    return this->size;
}

std::vector<ItemPTR> Inventory::getRessources() {
    return this->ressources;
}


void Inventory::setSize(int size) {
    std::cout << "Size of inventory " << this << " is now " << size << "\n";
    this->size = size;
}


void Inventory::addItem(ItemPTR item) {
    if (item == NULL)
        return;

    std::cout << "Item ";
    item->presentation();
    std::cout << " is added to inventory " << this << "\n";

    this->ressources.push_back(item);
}

void Inventory::removeItem(ItemPTR item) {
}

void Inventory::removeItem(std::string name) {
}


void Inventory::showAllItem() {
    for (ItemPTR item : this->ressources) {
        item->presentation();
    }
}
