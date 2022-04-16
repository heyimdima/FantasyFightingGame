// Dmytro Bondar
// CST-210 (Tue/Thu) (9:00-10:45am)
// April 24, 2022 (04/24/2022)
// Fantasy Fighting Game (Final Project)
// This is my own work

#ifndef FANTASYFIGHTINGGAME_ARMOR_H
#define FANTASYFIGHTINGGAME_ARMOR_H


#include "../Item.h"

class Armor : public Item {
private:
    int resistance;
public:
    // ~Constructors~ //
    Armor();
    virtual ~Armor();

    // ~Functions~ //
    void getArmorInfo();
    void buyMessage() override; // display what item user bought and resistance it gives

    // ~Getters~ //
    int getResistance()const; // getter for resistance

    // ~Setters~ //
    void setResistance(int r); // setter for resistance
};


#endif //FANTASYFIGHTINGGAME_ARMOR_H
