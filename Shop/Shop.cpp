// Dmytro Bondar
// CST-210 (Tue/Thu) (9:00-10:45am)
// April 24, 2022 (04/24/2022)
// Fantasy Fighting Game (Final Project)
// This is my own work

#include "iostream"
#include "Shop.h"
#include "Item/Weapon/Weapons/Stick.h"
#include "Item/Weapon/Weapons/Dagger.h"
#include "Item/Weapon/Weapons/Katana.h"
#include "Item/Weapon/Weapons/Pistol.h"
#include "Item/Armor/Armors/WoodenArmor.h"
#include "Item/Armor/Armors/IronArmor.h"
#include "Item/Armor/Armors/ModernArmor.h"

// ~Constructors~ //
Shop::Shop() {
    buildShop();
};

Shop::~Shop() {
    destroyShop();
}

// ~Functions~ //
void Shop::shopMenu(Character *character) {
    isShopping = true;
    while(isShopping) {
        // display the shop menu
        std::cout << "------------SHOP_MENU------------" << std::endl;
        std::cout << " | - |1| ->  | Weapons |" << std::endl;
        std::cout << " | - |2| ->   | Armor |" << std::endl;
        std::cout << " | - |0| <- | Main Menu |" << std::endl;
        std::cout << "---------------------------------" << std::endl;
        std::cout << " | Choice: ";
        std::cin >> choice;
        std::cout << "---------------------------------" << std::endl;

        switch (choice) {
            case 0: // Main Menu
                leaveShop();
                break;
            case 1:
                showWeapons();
                buyWeapons(character);
                break;
            case 2:
                showArmor();
                buyArmory(character);
                break;
            default:
                break; // default case just in case input is wrong
        }
    }
}

void Shop::leaveShop() {
    // tell user they have left the shop
    std::cout << "---------------------------------" << std::endl;
    std::cout << " | You left the shop.. |" << std::endl;
    std::cout << "---------------------------------" << std::endl;
    isShopping = false; // break the while loop
}


// function that shows all the weapons available
void Shop::showWeapons() {
    std::cout << "------------|WEAPONS|------------" << std::endl;
    for(int i = 0; i < 4; i++) {
        weapons[i]->getWeaponInfo();
    }
    std::cout << "---------------------------------" << std::endl;
}

void Shop::buyWeapons(Character *character) {
    // offer the user to buy one of the weapons
    std::cout << "-------------------------------------------------" << std::endl;
    std::cout << " | Which weapon would you like to purchase ? |" << std::endl;
    std::cout << " | - |1| -> | Stick |" << std::endl;
    std::cout << " | - |2| -> | Dagger |" << std::endl;
    std::cout << " | - |3| -> | Katana |" << std::endl;
    std::cout << " | - |4| -> | Pistol |" << std::endl;
    std::cout << " | - |0| <- |Shop Menu|" << std::endl;
    std::cout << "-------------------------------------------------" << std::endl;
    std::cout << " | Choice: ";
    std::cin >> this->choice;
    std::cout << "---------------------------------" << std::endl;

    switch (this->choice) {
        case 0: // Shop Menu
            break;
        case 1:
            character->buyWeapon(weapons[0]);
            break;
        case 2:
            character->buyWeapon(weapons[1]);
            break;
        case 3:
            character->buyWeapon(weapons[2]);
            break;
        case 4:
            character->buyWeapon(weapons[3]);
            break;
    }
}

void Shop::showArmor() {
    std::cout << "------------|ARMOR|------------" << std::endl;
    for(int i = 0; i < 3; i++) {
        armor[i]->getArmorInfo();
    }
    std::cout << "---------------------------------" << std::endl;
}

void Shop::buyArmory(Character *character) {
    // offer the user to buy one of the armors
    std::cout << "-------------------------------------------------" << std::endl;
    std::cout << " | Which armor would you like to purchase ? |" << std::endl;
    std::cout << " | - |1| -> | Wooden Armor |" << std::endl;
    std::cout << " | - |2| -> | Iron Armor |" << std::endl;
    std::cout << " | - |3| -> | Modern Armor |" << std::endl;
    std::cout << " | - |0| <- |SHOP_MENU|" << std::endl;
    std::cout << "-------------------------------------------------" << std::endl;
    std::cout << " | Choice: ";
    std::cin >> this->choice;
    std::cout << "---------------------------------" << std::endl;

    switch (this->choice) {
        case 0: // Shop Menu
            break;
        case 1: // Wooden Armor
            character->buyArmor(armor[0]);
            break;
        case 2: // Iron Armor
            character->buyArmor(armor[1]);
            break;
        case 3: // Modern Armor
            character->buyArmor(armor[2]);
            break;
    }
}



// function that initializes the shop
void Shop::buildShop() {
    std::cout << "/*/ ..building shop" << std::endl;

    buildWeapons();
    buildArmor();

    std::cout << "/*/ ..building shop: done" << std::endl;
}

// function that initializes all the weapons
void Shop::buildWeapons() {
    std::cout << "/*/ ..building weapons" << std::endl;

    // initialize weapons
    weapons[0] = new Stick(); // add Stick
    weapons[1] = new Dagger(); // add Dagger
    weapons[2] = new Katana(); // add Katana
    weapons[3] = new Pistol(); // Add Pistol

    std::cout << "/*/ ..building weapons: done" << std::endl;
}

void Shop::buildArmor() {
    std::cout << "/*/ ..building armor" << std::endl;

    // initialize armor
    armor[0] = new WoodenArmor();
    armor[1] = new IronArmor();
    armor[2] = new ModernArmor();

    std::cout << "/*/ ..building armor: done" << std::endl;
}


void Shop::destroyShop() {
    std::cout << "/*/ ..destroying shop" << std::endl;

    destroyWeapons();
    destroyArmor();

    std::cout << "/*/ ..destroying shop: done" << std::endl;
}


void Shop::destroyWeapons() {
    std::cout << "/*/ ..destroying weapons" << std::endl;

    for(int i = 0; i < 4; i++) {
        delete weapons[i];
    }

    std::cout << "/*/ ..destroying weapons: done" << std::endl;
}


void Shop::destroyArmor() {
    std::cout << "/*/ ..destroying armor" << std::endl;

    for(int i = 0; i < 3; i++) {
        delete armor[i];
    }

    std::cout << "/*/ ..destroying armor: done" << std::endl;
}
