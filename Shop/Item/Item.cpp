// Dmytro Bondar
// CST-210 (Tue/Thu) (9:00-10:45am)
// April 24, 2022 (04/24/2022)
// Fantasy Fighting Game (Final Project)
// This is my own work

#include "Item.h"

// ~Constructors~ //

Item::Item() {
    this->name = "";
    this->description = "";
    this->price = 0;
    this->ID = 0;
}

// ~Functions~ //

// ~Getters~ //

// getter for name
std::string Item::getName() const {
    return this->name;
}

// getter for description
std::string Item::getDescription() const {
    return this->description;
}

// getter for price
int Item::getPrice() const {
    return this->price;
}

// getter for ID
int Item::getID() const {
    return this->ID;
}

// ~Setters~ //

// setter for name
void Item::setName(std::string n) {
    this->name = n;
}

// setter for description
void Item::setDescription(std::string d) {
    this->description = d;
}

// setter for price
void Item::setPrice(int p) {
    this->price = p;
}

// setter for ID
void Item::setID(int id) {
    this->ID = id;
}
