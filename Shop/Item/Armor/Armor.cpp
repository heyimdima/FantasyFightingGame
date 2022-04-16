// Dmytro Bondar
// CST-210 (Tue/Thu) (9:00-10:45am)
// April 24, 2022 (04/24/2022)
// Fantasy Fighting Game (Final Project)
// This is my own work

#include <iostream>
#include "Armor.h"

// ~Constructors~ //

// no-argument constructor
Armor::Armor() {
    this->resistance = 0;
}

// destructor
Armor::~Armor() = default;

// ~Functions~ //

// get the information about an armor (name, description, resistance and price)
void Armor::getArmorInfo() {
    std::cout << "-------------------------------------------" << std::endl;
    std::cout << " |Name: " << this->getName() << " |" << std::endl;
    std::cout << " |Description: " << this->getDescription() << " |" << std::endl;
    std::cout << " |Resistance: " << this->getResistance() << " |" << std::endl;
    std::cout << " |Price: " << this->getPrice() << " |" << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
}

// virtual function to display what item user bought
// and display the damage change
void Armor::buyMessage() {
    std::cout << "| You purchased: " << this->getName() << std::endl;
    std::cout << "| Resistance: +" << this->resistance << std::endl;
}

// ~Getters~ //

int Armor::getResistance() const { // getter for resistance
    return this->resistance;
}

// ~Setters~ //

void Armor::setResistance(int r) { // setter for resistance
    this->resistance = r;
}
