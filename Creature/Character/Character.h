// Dmytro Bondar
// CST-210 (Tue/Thu) (9:00-10:45am)
// April 24, 2022 (04/24/2022)
// Fantasy Fighting Game (Final Project)
// This is my own work

#ifndef FANTASYFIGHTINGGAME_CHARACTER_H
#define FANTASYFIGHTINGGAME_CHARACTER_H


#include <fstream>
#include "../Creature.h"
#include "../../Shop/Item/Item.h"
#include "../../Shop/Item/Armor/Armor.h"
#include "../../Shop/Item/Weapon/Weapon.h"
#include "../Enemy/Enemy.h"

class Character : public Creature {
private:
    int gold;
    Weapon* weapon;
    Armor* armor;
    std::fstream saveFile;
    std::string PATH = "/Users/dimabondar/Desktop/School/Year1S2/CST-210/CST-210_WorkSpace/FantasyFightingGame/save.txt";
public:
    // ~Constructors~ //
    Character(); // no-argument constructor

    // ~Functions~ //
    void createNewCharacter(); // Create a new Character
    void loadCharacter(Character *character); // Load Character
    void saveCharacter(Character *character); // Save Character
    void die() override; // function to tell the user that the Creature is dead
    void buyWeapon(Weapon *wpn);
    void buyArmor(Armor *armr);
    void showStats();
    void resetHealth(int heal);
    void getRewarded(Enemy *enemy);


    // ~(Input / Output)~ override //
    friend std::istream& operator>>(std::istream &in, Character *rhs); // override the input operator
    friend std::ostream& operator<<(std::ostream& o, const Character* rhs); // override the output operator

    // ~Getters~ //
    int getGold()const; // getter for gold
    Weapon *getWeapon()const; // getter for weapon
    Armor *getArmor()const; // getter f0r armor

    // ~Setters~ //
    void setGold(int g); // setter for gold
    void setWeapon(Weapon *weap);
    void setArmor(Armor *arm);
};


#endif //FANTASYFIGHTINGGAME_CHARACTER_H
