#ifndef INVENTORY_HPP
#define INVENTORY_HPP

#include <vector>
#include <memory>
#include <iostream>
#include <algorithm>
#include "Item.hpp"

/** Class that will be used as an inventory and stock items inside */
class Inventory {
public:
    /**
     * Constructor
     * @param int size is the size of the inventory
    */
    Inventory(int size);
    /** Destructor */
    ~Inventory();

    /** @return int the size of the inventory */
    int getSize();
    /** @return vector<ItemPTR> the ressources inside the inventory */
    std::vector<ItemPTR> getRessources();

    /**
     * Add a new item inside the ressources vector
     * @param ItemPTR item is the ressource added
    */
    void addItem(ItemPTR item);

    /**
     * Remove an item inside the ressources vector with its name
     * @param string name is the name of the item that will be removed
    */
    void removeItem(std::string name);

    /** List all the items inside the inventory */
    void showAllItem();

private:
    /**
     * Find the specified item in the inventory thanks to its name
     * @param string name is the name of the item seeked
     * 
     * @return auto the reference of the item
    */
    auto seekItem(std::string name);

    /**
     * Find the specified item in the inventory thanks to itself
     * @param ItemPTR name is the name of the item seeked
     * 
     * @return auto the reference of the item
    */
    auto seekItem(ItemPTR item);

private:
    /** @var int is the size of the inventory */
    int size;
    /** @var vector is the inventory */
    std::vector<ItemPTR> ressources;
};

typedef std::shared_ptr<Inventory> InventoryPTR;

#endif