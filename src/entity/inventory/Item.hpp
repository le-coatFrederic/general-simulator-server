#ifndef ITEM_HPP
#define ITEM_HPP

#include <string>
#include <iostream>
#include <memory>

/** This is used to identify the level of rarity of an item */
typedef enum rarity {
    COMMON, UNCOMMON, RARE, LEGENDARY, UNIQUE
} rarity;

/** This is used to identify the type of the item */
typedef enum type {
    WEAPON, ARMOR, NURRITURE, POTION, BOOK, ARTEFACT, AMMO
} type;
/**
 * Item is a class that is used to create Item and get them a name, a description and a rarity value
*/
class Item {
public:
    /** CONSTRUCTOR */
    Item();
    /** DESTRUCTOR */
    ~Item();

    /**
     * GETTER
     * @return string this->name 
     */
    std::string getName();

    /**
     * GETTER
     * @return string this->description
    */
    std::string getDescription();

    /**
     * GETTER
     * @return rarity this->rare
     */
    rarity getRarity();

    /**
     * SETTER
     * @param string name is the new name of this
     */
    void setName(std::string name);

    /**
     * SETTER
     * @param string description is the new description of this
     */
    void setDescription(std::string description);

    /**
     * SETTER
     * @param rarity rare is the new level of rarity of this
     */
    void setRarity(rarity rare);


    /** This method will present the Item object */
    void presentation();
    /** This method will present the rarity of the Item object */
    std::string presentationRarity();

    /** Test with the operator == if they have the same name */
    bool operator==(std::string const& name);

protected:
    /** @var string name is the variable that name the object */
    std::string name;
    /** @var string description is the variable that describe the object */
    std::string description;
    /** @var rarity rare is the variable that give a rarity level to the object */
    rarity rare;
};

/** RAII */
typedef std::shared_ptr<Item> ItemPTR;

#endif