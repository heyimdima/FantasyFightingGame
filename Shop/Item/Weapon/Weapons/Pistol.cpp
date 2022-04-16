// Dmytro Bondar
// CST-210 (Tue/Thu) (9:00-10:45am)
// April 24, 2022 (04/24/2022)
// Fantasy Fighting Game (Final Project)
// This is my own work

#include <iostream>
#include "Pistol.h"

// ~Constructors~ //

// no-argument constructor
Pistol::Pistol() {
    setName("Pistol");
    setDescription("A gun that fires bullets..");
    setPrice(45);
    setDamage(50);
    setID(4);
}

// ~Functions~ //

// virtual function for each weapon
// to have a special saying that it does on every attack
// depending on the weapon that is currently equipped
void Pistol::use() {
    std::cout << "| pew pew. |" << std::endl;
}