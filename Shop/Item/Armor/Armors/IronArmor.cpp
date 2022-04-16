// Dmytro Bondar
// CST-210 (Tue/Thu) (9:00-10:45am)
// April 24, 2022 (04/24/2022)
// Fantasy Fighting Game (Final Project)
// This is my own work

#include "IronArmor.h"

// ~Constructors~ //

IronArmor::IronArmor() : Armor() {
    setName("Iron Armor");
    setDescription("Armor that is made out of iron..");
    setResistance(10);
    setPrice(20);
    setID(7);
}
