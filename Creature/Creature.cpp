// Dmytro Bondar
// CST-210 (Tue/Thu) (9:00-10:45am)
// April 24, 2022 (04/24/2022)
// Fantasy Fighting Game (Final Project)
// This is my own work

#include <iostream>
#include "Creature.h"

// ~Constructors~ //

Creature::Creature() { // no-argument constructor
    this->name = "";
    this->health = 0;
    this->damage = 0;
    this->resistance = 0;
}

// ~Functions~

void Creature::hit(Creature *creature) {
    creature->setHealth((creature->getHealth() + creature->getResistance()) - this->getDamage());
    std::cout << "----------------------------------------" << std::endl;
    std::cout << " |" << this->getName() << "| hit |" << creature->getName() << "| for " << getDamage() << " damage. |" << std::endl;
    std::cout << "----------------------------------------" << std::endl;
}

// function to check if creature is alive
bool Creature::alive() {
    if(this->health <= 0){
        die();
        return false;
    }
    else
        return true;
}

// function to tell the user that the Creature is dead
void Creature::die() {
    std::cout << "This creature died" << std::endl;
}

// ~Getters~

std::string Creature::getName()const { // getter for name
    return this->name;
}

int Creature::getHealth()const { // getter for health
    return this->health;
}

int Creature::getDamage()const { // getter for damage
    return this->damage;
}

int Creature::getResistance()const { // getter for resistance
    return this->resistance;
}

// ~Setters~

void Creature::setName(std::string n) { // setter for name
    this->name = n;
}

void Creature::setHealth(int h) { // setter for health
    this->health = h;

    if(this->health < 0){
        this->health = 0;
    }
}

void Creature::setDamage(int d) { // setter for damage
    this->damage = d;
}

void Creature::setResistance(int r) { // setter for resistance
    this->resistance = r;
}
