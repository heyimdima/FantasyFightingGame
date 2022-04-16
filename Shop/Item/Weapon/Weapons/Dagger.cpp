// Dmytro Bondar
// CST-210 (Tue/Thu) (9:00-10:45am)
// April 24, 2022 (04/24/2022)
// Fantasy Fighting Game (Final Project)
// This is my own work

#include <iostream>
#include "Dagger.h"

// ~Constructors~ //

// no-argument constructor
Dagger::Dagger() {
    setName("Dagger");
    setDescription("A knife with two sharp edges..");
    setPrice(20);
    setDamage(15);
    setID(2);
}

// ~Functions~ //

// virtual function for each weapon
// to have a special saying that it does on every attack
// depending on the weapon that is currently equipped
void Dagger::use() {
    std::cout << "| You stabbed an enemy with a dagger. |" << std::endl;
}
