// Dmytro Bondar
// CST-210 (Tue/Thu) (9:00-10:45am)
// April 24, 2022 (04/24/2022)
// Fantasy Fighting Game (Final Project)
// This is my own work

#include <iostream>
#include "Katana.h"

// ~Constructors~ //

// no-argument constructor
Katana::Katana() {
    setName("Katana");
    setDescription("Sharp Japanese sword..");
    setPrice(30);
    setDamage(35);
    setID(3);
}

// ~Functions~ //

// virtual function for each weapon
// to have a special saying that it does on every attack
// depending on the weapon that is currently equipped
void Katana::use() {
    std::cout << "| Katana slices through the enemy. |" << std::endl;
}