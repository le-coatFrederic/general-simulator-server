#ifndef INVENTORY_HPP
#define INVENTORY_HPP

#include <vector>
#include <memory>
#include <iostream>
#include "Item.hpp"

class Inventory {
public:
    Inventory(int size);
    ~Inventory();

    int getSize();
    std::vector<ItemPTR> getRessources();

    void addItem(ItemPTR item);
    void removeItem(ItemPTR item);
    void removeItem(std::string name);

    void showAllItem();
private:
    int size;
    std::vector<ItemPTR> ressources;
};

typedef std::shared_ptr<Inventory> InventoryPTR;

#endif