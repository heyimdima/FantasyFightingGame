// Dmytro Bondar
// CST-210 (Tue/Thu) (9:00-10:45am)
// April 24, 2022 (04/24/2022)
// Fantasy Fighting Game (Final Project)
// This is my own work

#include <iostream>
#include "Stick.h"

// ~Constructors~ //

// no-argument constructor
Stick::Stick() {
    setName("Stick");
    setDescription("A simple wooden stick..");
    setPrice(10);
    setDamage(10);
    setID(1);
}

// ~Functions~ //

// virtual function for each weapon
// to have a special saying that it does on every attack
// depending on the weapon that is currently equipped
void Stick::use() {
    std::cout << "| You swing a stick at the enemy. |" << std::endl;
}