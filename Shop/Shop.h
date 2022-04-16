// Dmytro Bondar
// CST-210 (Tue/Thu) (9:00-10:45am)
// April 24, 2022 (04/24/2022)
// Fantasy Fighting Game (Final Project)
// This is my own work

#ifndef FANTASYFIGHTINGGAME_SHOP_H
#define FANTASYFIGHTINGGAME_SHOP_H


#include "Item/Weapon/Weapon.h"
#include "Item/Armor/Armor.h"
#include "../Creature/Character/Character.h"

class Shop {
private:
    Weapon* weapons[4];
    Armor* armor[3];
    bool isShopping{};
    int choice{};
public:
    // ~Constructors~ //
    Shop();
    ~Shop();

    // ~Functions~ //
    void shopMenu(Character *character);
    void leaveShop();
    void showWeapons(); // function that shows all the weapons available
    void buyWeapons(Character *character);
    void showArmor(); // function that shows all the armor available
    void buyArmory(Character *character);

    // Constructor Functions
    void buildShop();
    void buildWeapons();
    void buildArmor();

    // Destructor Functions
    void destroyShop();
    void destroyWeapons();
    void destroyArmor();



};


#endif //FANTASYFIGHTINGGAME_SHOP_H
