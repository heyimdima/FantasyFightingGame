// Dmytro Bondar
// CST-210 (Tue/Thu) (9:00-10:45am)
// April 24, 2022 (04/24/2022)
// Fantasy Fighting Game (Final Project)
// This is my own work

#include <iostream>
#include "Weapon.h"

// ~Constructors~ //

// no-argument constructor
Weapon::Weapon() : Item() {
    this->damage = 0;
}

// destructor
Weapon::~Weapon() = default;

// ~Functions~ //

// virtual function for each weapon
// to have a special saying that it does on every attack
// depending on the weapon that is currently equipped
void Weapon::use() {
    std::cout << "You used a weapon" << std::endl;
}

// get the information about a weapon (name, description, damage and price)
void Weapon::getWeaponInfo() {
    std::cout << "-------------------------------------------" << std::endl;
    std::cout << " |Name: " << this->getName() << " |" << std::endl;
    std::cout << " |Description: " << this->getDescription() << " |" << std::endl;
    std::cout << " |Damage: " << this->getDamage() << " |" << std::endl;
    std::cout << " |Price: " << this->getPrice() << " |" << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
}

// virtual function to display what item user bought
// and display the damage change
void Weapon::buyMessage() {
    std::cout << "| You purchased: " << this->getName() << std::endl;
    std::cout << "| Damage: +" << this->damage << std::endl;
}

// ~Getters~ //

// getter for damage
int Weapon::getDamage()const {
    return this->damage;
}

// ~Setters~ //

// setter for damage
void Weapon::setDamage(int d) {
    this->damage = d;
}
