// Dmytro Bondar
// CST-210 (Tue/Thu) (9:00-10:45am)
// April 24, 2022 (04/24/2022)
// Fantasy Fighting Game (Final Project)
// This is my own work

#include <iostream>
#include <vector>
#include "Character.h"
#include "../../Shop/Item/Weapon/Weapons/Stick.h"
#include "../../Shop/Item/Weapon/Weapons/Dagger.h"
#include "../../Shop/Item/Weapon/Weapons/Katana.h"
#include "../../Shop/Item/Weapon/Weapons/Pistol.h"
#include "../../Shop/Item/Armor/Armors/WoodenArmor.h"
#include "../../Shop/Item/Armor/Armors/IronArmor.h"
#include "../../Shop/Item/Armor/Armors/ModernArmor.h"

// ~Constructors~ //


Character::Character() : Creature() { // no-argument constructor
    weapon = new Weapon;
    armor = new Armor;
    this->gold = 0;
}

// ~Functions~ //

// Create a new character
void Character::createNewCharacter() {
    std::string name; // initialize a variable for user input for name
    std::cout << " | Name your character: ";
    std::cin >> name;
    setName(name); // set name
    setHealth(100); // set health
    setDamage(25); // set damage
    setResistance(5); // set resistance
    setGold(50); // set gold
    setWeapon(new Weapon());
    setArmor(new Armor());
    std::cout << "-----------------------------------------------------------" << std::endl;
    std::cout << " | Character: " << getName() << " has been successfully created. |" << std::endl;
    std::cout << "-----------------------------------------------------------" << std::endl;
}

// Load Character
void Character::loadCharacter(Character* character) {
    saveFile.open(PATH, std::ios_base::in);
    if(saveFile.is_open()) {
        saveFile >> character;
        std::cout << "------------------------------------------------------" << std::endl;
        std::cout << " | Character: " << character->getName() << " has been successfully loaded. |" << std::endl;
        std::cout << "------------------------------------------------------" << std::endl;
    }
    else
        std::cout << "Error occurred while reading from a file.." << std::endl;
    saveFile.close();
}

// Save Character
void Character::saveCharacter(Character *character) {
    saveFile.open(PATH, std::ios_base::out);
    if(saveFile.is_open()) {
        saveFile << character;
        std::cout << "----------------------------------------------------" << std::endl;
        std::cout << " | Character: " << character->getName() << " has been successfully saved. |" << std::endl;
        std::cout << "----------------------------------------------------" << std::endl;
    }
    else
        std::cout << "Error occurred while writing to a file.." << std::endl;
    saveFile.close();
}

// function to tell the user that the Creature is dead
void Character::die() {
    std::cout << " | " << getName() << " | died..." << std::endl;
}

//
void Character::buyWeapon(Weapon *wpn) {
    if(this->gold >= wpn->getPrice()) {
        if(wpn == this->weapon) {
            std::cout << "| You already own " << wpn->getName() << " |" << std::endl;
        }
        else {
            this->gold -= wpn->getPrice();
            setDamage(wpn->getDamage() + 25);
            this->weapon = wpn;
            wpn->buyMessage();
        }
    }
    else {
        std::cout << "| You do not have enough gold to buy " << wpn->getName() << " |" << std::endl;
        std::cout << "| Weapon Price: " << wpn->getPrice() << " | Your gold amount: " << this->gold << std::endl;
    }
}

void Character::buyArmor(Armor *armr) {
    if(this->gold >= armr->getPrice()) {
        if(armr == this->armor) {
            std::cout << "| You already own " << armr->getName() << " |" << std::endl;
        }
        else {
            this->gold -= armr->getPrice();
            setResistance(armr->getResistance() + 5);
            this->armor = armr;
            armr->buyMessage();
        }
    }
    else {
        std::cout << "| You do not have enough gold to buy " << armr->getName() << " |" << std::endl;
        std::cout << "| Weapon Price: " << armr->getPrice() << " | Your gold amount: " << this->gold << std::endl;
    }
}

void Character::showStats() {
    std::cout << "-------CHARACTER_SHEET-------" << std::endl;
    std::cout << " | Name: " << this->getName() << std::endl; // display character name
    std::cout << " | Health: " << this->getHealth() << std::endl; // display character health
    std::cout << " | Resistance: " << this->getResistance() << std::endl; // display character resistance
    std::cout << " | Damage: " << this->getDamage() << std::endl; // display character damage
    std::cout << " | Weapon: " << this->weapon->getName() << std::endl; // display character weapon
    std::cout << " | Armor: " << this->armor->getName() << std::endl; // display character armor
    std::cout << " | Gold: " << this->getGold() << std::endl; // display character gold
    std::cout << "-----------------------------" << std::endl;
}

void Character::resetHealth(int heal) {
    this->setHealth(heal);
}

void Character::getRewarded(Enemy *enemy) {
    this->gold += enemy->getReward();
    std::cout << "---------------------------------------------------" << std::endl;
    std::cout << "| You got rewarded " << enemy->getReward() << " gold for enemy: "
        << enemy->getName() << " |" << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;
}

// ~(Input / Output)~ override //

// override the input operator
std::istream &operator>>(std::istream &in, Character *character) {
    std::vector<std::string> data; // initialize a vector to hold all the data

    for(int i = 0; i < 7; i++) { // read in the data from the save.txt file
        std::string getData;
        getline(in, getData);
        data.push_back(getData);
    }

    // set all the components of the character
    // use 'stoi()' function to convert from string to int value
    character->setName(data[0]); // set name
    character->setHealth(std::stoi(data[1])); // set health
    character->setDamage(std::stoi(data[2])); // set damage
    character->setResistance(std::stoi(data[3])); // set resistance
    character->setGold(std::stoi(data[4])); // set gold

    switch (std::stoi(data[5])) {
        case 1:
            character->setWeapon(new Stick());
            break;
        case 2:
            character->setWeapon(new Dagger());
            break;
        case 3:
            character->setWeapon(new Katana());
            break;
        case 4:
            character->setWeapon(new Pistol);
            break;
        default:
            character->setWeapon(new Weapon());
            break;
    }

    switch (std::stoi(data[6])) {
        case 5:
            character->setArmor(new WoodenArmor());
            break;
        case 6:
            character->setArmor(new IronArmor());
            break;
        case 7:
            character->setArmor(new ModernArmor());
            break;
        default:
            break;
    }


    return in;
}

// override the output operator
std::ostream &operator<<(std::ostream &out, const Character *character) {
    out << character->getName() << "\n" << character->getHealth() << "\n" << character->getDamage() <<
        "\n" << character->getResistance() << "\n" << character->getGold() << "\n" << character->getWeapon()->getID() <<
            "\n" << character->getArmor()->getID() << "\n";

    return out;
}


// ~Getters~ //

int Character::getGold()const { // getter for gold
    return this->gold;
}

Weapon* Character::getWeapon()const { // getter for weapon
    return weapon;
}

Armor* Character::getArmor()const { // getter for armor
    return armor;
}

// ~Setters~ //

void Character::setGold(int g) { // setter for gold
    this->gold = g;
}

void Character::setWeapon(Weapon *weap) { // setter for weapon
    this->weapon = weap;
}

void Character::setArmor(Armor *arm) { // setter for armor
    this->armor = arm;
}

