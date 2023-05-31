#include "Inventory.hpp"

Inventory::Inventory(int size) {
    std::cout << "Inventory " << this << " is created\n";
    this->size = size;
    this->ressources = std::vector<ItemPTR>();
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


void Inventory::addItem(ItemPTR item) {
    if (item == NULL)
        return;

    if (this->ressources.size() >= this->size)
        return;

    std::cout << "Item ";
    item->presentation();
    std::cout << "is added to inventory " << this << "\n";

    this->ressources.push_back(item);
}

void Inventory::removeItem(std::string name) {
    if (this->seekItem(name) != std::end(this->ressources))
        this->ressources.erase(this->seekItem(name));
}


void Inventory::showAllItem() {
    for (ItemPTR item : this->ressources) {
        item->presentation();
    }
}

auto Inventory::seekItem(std::string name) {
    auto find = std::find(std::begin(this->ressources), std::end(this->ressources), name);
}

auto Inventory::seekItem(ItemPTR item) {
    return this->seekItem(item->getName());
}