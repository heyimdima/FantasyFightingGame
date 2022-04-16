// Dmytro Bondar
// CST-210 (Tue/Thu) (9:00-10:45am)
// April 24, 2022 (04/24/2022)
// Fantasy Fighting Game (Final Project)
// This is my own work

#ifndef FANTASYFIGHTINGGAME_WEAPON_H
#define FANTASYFIGHTINGGAME_WEAPON_H


#include "../Item.h"

class Weapon : public Item {
private:
    int damage;
public:
    // ~Constructors~ //
    Weapon();
    virtual ~Weapon();

    // ~Functions~ //
    virtual void use(); // function to have different response when Character attacks depending on the weapon
    void getWeaponInfo(); // get the information about a weapon (name, description, damage and price)
    void buyMessage() override; // display what item user bought and damage it gives


    // ~Getters~ //
    int getDamage()const; // getter for damage

    // ~Setters~ //
    void setDamage(int d); // setter for damage


};


#endif //FANTASYFIGHTINGGAME_WEAPON_H
